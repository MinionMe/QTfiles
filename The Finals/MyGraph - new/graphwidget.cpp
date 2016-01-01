#include "graphwidget.h"
#include "edge.h"
#include "node.h"
#include <math.h>
#include <QKeyEvent>
#include <QMessageBox>
#include <QDebug>

extern PaperConferenceAuthorGraph PCAgraph;
extern TopicGraph topicGraph;
int graphType = 0;
extern int boxNum;
extern double nodeRadius;
extern double linewidth;
extern QString textBrowser;
extern QColor nodeColor;
extern QColor edgeColor;
extern int colorNodeChange;
extern int colorEdgeChange;
extern int searchtype;
extern int searchid;
int saveTimes = 0;
GraphWidget::GraphWidget(QWidget *parent)
	: QGraphicsView(parent), timerId(0),R(0)
{
	setCacheMode(CacheBackground);
	setViewportUpdateMode(BoundingRectViewportUpdate);
	setRenderHint(QPainter::Antialiasing);
	setTransformationAnchor(AnchorUnderMouse);
	scale(qreal(0.8), qreal(0.8));
	setMinimumSize(600, 400);
	setDragMode(QGraphicsView::DragMode::RubberBandDrag);
}
void GraphWidget::keyPressEvent(QKeyEvent *event)
{
	switch (event->key()) 
	{
	case Qt::Key_Left:
		rotate(5);
		break;
	case Qt::Key_Right:
		rotate(-5);
		break;
	case Qt::Key_Space:
		shuffle();
		break;
	default:
		QGraphicsView::keyPressEvent(event);
	}
}
void GraphWidget::drawBackground(QPainter *painter, const QRectF &rect)
{
	Q_UNUSED(rect);

	// Shadow
	QRectF sceneRect = this->sceneRect();
	QRectF rightShadow(sceneRect.right(), sceneRect.top() + 5, 5, sceneRect.height());
	QRectF bottomShadow(sceneRect.left() + 5, sceneRect.bottom(), sceneRect.width(), 5);
	if (rightShadow.intersects(rect) || rightShadow.contains(rect))
		painter->fillRect(rightShadow, Qt::darkGray);
	if (bottomShadow.intersects(rect) || bottomShadow.contains(rect))
		painter->fillRect(bottomShadow, Qt::darkGray);

	// Fill
	QLinearGradient gradient(sceneRect.topLeft(), sceneRect.bottomRight());
	gradient.setColorAt(0, Qt::white);
	gradient.setColorAt(1, Qt::lightGray);
	painter->fillRect(rect.intersected(sceneRect), gradient);
	painter->setBrush(Qt::NoBrush);
	painter->drawRect(sceneRect);
}
void GraphWidget::rotLeft()
{
	this->rotate(-5);
}
void GraphWidget::rotRight()
{
	this->rotate(5);
}    
void GraphWidget::shuffle()
{
	foreach (QGraphicsItem *item, scene()->items()) 
	{
		if (qgraphicsitem_cast<Node *>(item))
			item->setPos(50 + qrand() % 300, 50 + qrand() % 300);
	}
}
void GraphWidget::beginPaint()
{
	QGraphicsScene *m_scene = new QGraphicsScene(this);
	m_scene->setItemIndexMethod(QGraphicsScene::NoIndex);
	m_scene->setSceneRect(-400, -400, 1000, 1000);
	if (graphType == 1)
	{
		int edgeNum = PCAgraph.m_edge.size();
		useVTKstrategy_PCA(edgeNum);
		map<int,Node*>::iterator iter = PCAgraph.m_node.begin();
		
		for (int i = 0;i < 200;i++,iter++)
		{
			m_scene->addItem(iter->second);	
		}
		for (int i = 0;i < edgeNum;i++)
		{
			m_scene->addItem(PCAgraph.m_edge[i]);
		}

	}
	else if (graphType == 2)
	{
		int edgeNum = topicGraph.m_edge.size();
		useVTKstrategy_Topic(edgeNum);
		map<int,Node*>::iterator iter = topicGraph.m_node.begin();
		for (int i = 0;i < 200;i++,iter++)
		{
			m_scene->addItem(iter->second);	
		}
		for (int i = 0;i < edgeNum;i++)
		{
			m_scene->addItem(topicGraph.m_edge[i]);
		}
	}
	qDebug() << PCAgraph.m_node.size();
	qDebug() << PCAgraph.m_edge.size();
	label = new QLabel(this,0);
	label->setText(QString::number(PCAgraph.m_node.size()));
	this->setScene(m_scene);
	this->show();
}
void GraphWidget::zoomOut()
{
	this->scale(1/1.2,1/1.2);
}
void GraphWidget::zoomIn()
{
	this->scale(1.2,1.2);
}
QColor GraphWidget::setLineColor(int node_1,int node_2)
{
	switch (node_1 + node_2)
	{
	case 2:
		return Qt::red;
	case 6:
		return Qt::darkGreen;
	case 8:
		return Qt::blue;
	default:
		return Qt::cyan;
		break;
	}
}
void GraphWidget::useVTKstrategy_PCA(int &edgeNum)
{
	vtkSmartPointer<vtkMutableUndirectedGraph> g = vtkSmartPointer<vtkMutableUndirectedGraph>::New();
	map<int,Node*>::iterator iter = PCAgraph.m_node.begin();
	vtkIdType* vertex = new vtkIdType [PCAgraph.m_node.size()];
	for (int i = 0;i < 200;i++)
	{
		vertex[i] = g->AddVertex();
	}
	for (int i = 0;i < edgeNum;i++)
	{
		g->AddEdge(vertex[PCAgraph.m_edge[i]->source->m_mapId],vertex[PCAgraph.m_edge[i]->dest->m_mapId]);
	}
	VTK_CREATE(vtkGraphLayout, layout);
	layout->SetInputData(g);
	switch (boxNum)
	{
	case 0:
		{
			VTK_CREATE(vtkCircularLayoutStrategy, circular);
			layout->SetLayoutStrategy(circular);
		}
		break;
	case 1:
		{
			VTK_CREATE(vtkFast2DLayoutStrategy, fast2D);
			layout->SetLayoutStrategy(fast2D);
		}
		break;
	case 2:
		{
			VTK_CREATE(vtkForceDirectedLayoutStrategy, forceDirected);
			layout->SetLayoutStrategy(forceDirected);
		}
		break;
	case 3:
		{
			VTK_CREATE(vtkPassThroughLayoutStrategy, passThrough);
			layout->SetLayoutStrategy(passThrough);
		}
		break;
	case 4:
		{
			VTK_CREATE(vtkRandomLayoutStrategy, random);
			layout->SetLayoutStrategy(random);
		}
		break;
	case 5:
		{
			VTK_CREATE(vtkSimple2DLayoutStrategy, simple2D);
			layout->SetLayoutStrategy(simple2D);
		}
		break;
	default:
		break;
	}
	layout->Update();
	vtkGraph* outputGraph = layout->GetOutput();
	double pt[3] = {0.0, 0.0, 0.0};
	for (vtkIdType i = 0; i < 200; i++,iter++)
	{
		outputGraph->GetPoint(i, pt);
		iter->second->setPos(pt[0] * 100 + 150,pt[1] * 100 + 150);
	}
	for (int i = 0;i < edgeNum;i++)
	{
		PCAgraph.m_edge[i]->adjust();
	}
}
void GraphWidget::useVTKstrategy_Topic(int &edgeNum)
{
	vtkSmartPointer<vtkMutableUndirectedGraph> g = vtkSmartPointer<vtkMutableUndirectedGraph>::New();
	map<int,Node*>::iterator iter = topicGraph.m_node.begin();
	vtkIdType* vertex = new vtkIdType [topicGraph.m_node.size()];
	for (int i = 0;i < 200;i++)
	{
		vertex[i] = g->AddVertex();
	}
	for (int i = 0;i < edgeNum;i++)
	{
		g->AddEdge(vertex[topicGraph.m_edge[i]->source->m_mapId],vertex[topicGraph.m_edge[i]->dest->m_mapId]);
	}
	VTK_CREATE(vtkGraphLayout, layout);
	layout->SetInputData(g);
	switch (boxNum)
	{
	case 0:
		{
			VTK_CREATE(vtkCircularLayoutStrategy, circular);
			layout->SetLayoutStrategy(circular);
		}
		break;
	case 1:
		{
			VTK_CREATE(vtkFast2DLayoutStrategy, fast2D);
			layout->SetLayoutStrategy(fast2D);
		}
		break;
	case 2:
		{
			VTK_CREATE(vtkForceDirectedLayoutStrategy, forceDirected);
			layout->SetLayoutStrategy(forceDirected);
		}
		break;
	case 3:
		{
			VTK_CREATE(vtkPassThroughLayoutStrategy, passThrough);
			layout->SetLayoutStrategy(passThrough);
		}
		break;
	case 4:
		{
			VTK_CREATE(vtkRandomLayoutStrategy, random);
			layout->SetLayoutStrategy(random);
		}
		break;
	case 5:
		{
			VTK_CREATE(vtkSimple2DLayoutStrategy, simple2D);
			layout->SetLayoutStrategy(simple2D);
			layout->Update();
			vtkGraph* outputGraph = layout->GetOutput();
			double pt[3] = {0.0, 0.0, 0.0};
			for (vtkIdType i = 0; i < 200; i++,iter++)
			{
				outputGraph->GetPoint(i, pt);
				iter->second->setPos(pt[0] * 10 + 100,pt[1] * 10 + 100);
			}
			return;
		}
		break;
	default:
		break;
	}
	layout->Update();
	vtkGraph* outputGraph = layout->GetOutput();
	double pt[3] = {0.0, 0.0, 0.0};
	for (vtkIdType i = 0; i < 200; i++,iter++)
	{
		outputGraph->GetPoint(i, pt);
		iter->second->setPos(pt[0] * 100 + 150,pt[1] * 100 + 150);
	}
	for (int i = 0;i < edgeNum;i++)
	{
		topicGraph.m_edge[i]->adjust();
	}
}
void GraphWidget::setNoderadius()
{
	foreach (QGraphicsItem *item, scene()->items()) 
	{
		if (qgraphicsitem_cast<Node *>(item))
		{
			Node *node = qgraphicsitem_cast<Node *>(item);
			node->m_radius = nodeRadius;
		}
	}
	this->scene()->invalidate();
}
void GraphWidget::setLineWidth()
{
	foreach (QGraphicsItem *item, scene()->items()) 
	{
		if (qgraphicsitem_cast<Edge *>(item))
		{
			Edge *edge = qgraphicsitem_cast<Edge *>(item);
			edge->m_width = linewidth;
			item->update();
		}
	}
	this->scene()->invalidate();
}
void GraphWidget::saveGraph()
{
	QPixmap graph = this->grab();
	QString temp = "D:\\graph" + QString::number(saveTimes) +".jpg";
	graph.save(temp);
	QMessageBox::information(this, "Save",
		temp + " is saved in D.");
	saveTimes++;
}
void GraphWidget::hideItem()
{
	foreach (QGraphicsItem *item, scene()->selectedItems()) 
	{
		if (qgraphicsitem_cast<Node *>(item))
		{
			Node* node = qgraphicsitem_cast<Node*>(item);
			node->setVisible(false);
			foreach (Edge *edge, node->edgeList)
			{
				edge->setVisible(false);
				edge->setEnabled(false);
			}
		}
	}
}
void GraphWidget::showItem()
{
	foreach (QGraphicsItem *item, scene()->items()) 
	{
		if (qgraphicsitem_cast<Node *>(item))
		{
			Node* node = qgraphicsitem_cast<Node*>(item);
			node->setVisible(true);
			foreach (Edge *edge, node->edgeList)
			{
				edge->setVisible(true);
				edge->setEnabled(true);
			}
		}
	}
}
void GraphWidget::searchNodeId()
{
	foreach (QGraphicsItem *item, scene()->items()) 
	{
		if (qgraphicsitem_cast<Node *>(item))
		{
			Node* node = qgraphicsitem_cast<Node*>(item);
			if (node->m_NodeId == searchid)
			{
				node->setSelected(true);
				node->update();
			}
		}
	}
}
void GraphWidget::searchNodeType()
{
	foreach (QGraphicsItem *item, scene()->items()) 
	{
		if (qgraphicsitem_cast<Node *>(item))
		{
			Node* node = qgraphicsitem_cast<Node*>(item);
			if (node->m_typeId == searchtype)
			{
				node->setSelected(true);
				node->update();
			}
		}
	}
}
void GraphWidget::setEdgeColor()
{
	if (colorEdgeChange != 0)
	{
		foreach (QGraphicsItem *item, scene()->items()) 
		{
			if (qgraphicsitem_cast<Edge *>(item))
			{
				Edge *edge = qgraphicsitem_cast<Edge *>(item);
				edge->m_color = edgeColor;
				item->update();
			}
		}
	}
	else
	{
		foreach (QGraphicsItem *item, scene()->items()) 
		{
			if (qgraphicsitem_cast<Edge *>(item))
			{
				Edge *edge = qgraphicsitem_cast<Edge *>(item);
				edge->m_color = edge->m_tempColor;
				item->update();
			}
		}
	}
	this->scene()->invalidate();
}
void GraphWidget::setNodeColor()
{
	if (colorNodeChange != 0)
	{
		foreach (QGraphicsItem *item, scene()->items()) 
		{
			if (qgraphicsitem_cast<Node *>(item))
			{
				Node *node = qgraphicsitem_cast<Node *>(item);
				node->m_color = nodeColor;
				item->update();
			}
		}
	}
	else
	{
		foreach (QGraphicsItem *item, scene()->items()) 
		{
			if (qgraphicsitem_cast<Node *>(item))
			{
				Node *node = qgraphicsitem_cast<Node *>(item);
				node->m_color = node->m_tempColor;
				item->update();
			}
		}
	}
	this->scene()->invalidate();
}