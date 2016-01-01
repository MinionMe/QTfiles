#include "edge.h"
#include "node.h"
#include "graphwidget.h"
#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include <QPainter>
#include <QStyleOption>

//! [0]
Node::Node(GraphWidget *graphWidget)
	: graph(graphWidget),m_radius(1.0)
{
	setFlag(ItemIsMovable);
	setFlag(ItemSendsGeometryChanges);
	setCacheMode(DeviceCoordinateCache);
	setFlag(ItemIsSelectable);
	setZValue(3);
}
//! [0]

//! [1]
void Node::addEdge(Edge *edge)
{
	edgeList << edge;
	edge->adjust();
}

QList<Edge *> Node::edges() const
{
	return edgeList;
}
bool Node::advance()
{
	if (newPos == pos())
		return false;
	setPos(newPos);
	return true;
}
QRectF Node::boundingRect() const
{
	qreal adjust = 2;
	return QRectF( -m_radius - adjust, -m_radius - adjust, m_radius * 2 + adjust, m_radius * 2 + adjust);
}
QPainterPath Node::shape() const
{
	QPainterPath path;
	path.addEllipse(-m_radius, -m_radius, 2 * m_radius, 2 * m_radius);
	return path;
}
void Node::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *)
{
	if (this->isSelected())
	{
		setToolTip(setText());
		painter->setPen(Qt::NoPen);
		painter->setBrush(Qt::black);
		painter->drawEllipse(-m_radius, -m_radius, 2 * m_radius, 2 * m_radius);
		foreach (Edge *edge, edgeList)
		{
			edge->m_color = Qt::red;
			edge->adjust();
		}
		update();
	}
	else
	{
		setToolTip(setText());
		painter->setPen(Qt::NoPen);
		painter->setBrush(m_color);
		painter->drawEllipse(-m_radius, -m_radius, 2 * m_radius, 2 * m_radius);
		foreach (Edge *edge, edgeList)
		{
			edge->m_color = edge->m_tempColor;
			edge->adjust();
		}
		update();
	}
	
}
QVariant Node::itemChange(GraphicsItemChange change, const QVariant &value)
{
	switch (change) 
	{
	case ItemPositionHasChanged:
		foreach (Edge *edge, edgeList)edge->adjust();
		break;
	default:
		break;
	};
	return QGraphicsItem::itemChange(change, value);
}
void Node::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
	this->m_color = Qt::black;
	foreach (Edge *edge, edgeList)
	{
		edge->m_color = Qt::red;
		edge->adjust();
	}
	update();
	QGraphicsItem::mousePressEvent(event);
}
void Node::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
	this->m_color = m_tempColor;
	foreach (Edge *edge, edgeList)
	{
		edge->m_color = edge->m_tempColor;
		edge->adjust();
	}
	update();
	QGraphicsItem::mouseReleaseEvent(event);
}
QString Node::setText()
{
	switch (m_typeId)
	{
	case 1:
		{
			PaperNode *node = (PaperNode*)this;
			messages = QString::number(m_NodeId) + "\ntype: paper\n" + "year: " + QString::number(node->m_year) + "\nauthors: " + QString::fromStdString(node->m_authors) 
				+ "\ndateFrom: " + QString::number(node->m_dataFrom) + "\nid: " + QString::fromStdString(node->m_id) + "\npageFrom: " + QString::number(node->m_pageFrom) 
				+ "\npaperTitle: " + QString::fromStdString(node->m_paperTitle) + "\npaperTitleShort: " 
				+ QString::fromStdString(node->m_paperTitleShort) + "\nviewLabel: " + QString::fromStdString(m_viewLabel);
		}
		break;
	case 2:
		{
			ConferenceNode *node = (ConferenceNode*)this;
			messages = QString::number(m_NodeId) + "\ntype: conference\n" + "year: " + QString::number(node->m_year) + 
				"\nid: " + QString::fromStdString(node->m_id) + "\nconferenceName: " + QString::fromStdString(node->m_conferenceName) + "\nconferenceNameShort: " 
				+ QString::fromStdString(node->m_conferenceNameShort) + "\nviewLabel: " + QString::fromStdString(m_viewLabel);
		}
		break;
	case 3:
		{
			AuthorNode *node = (AuthorNode*)this;
			messages = QString::number(m_NodeId) + "\ntype: author\n" + "year: " + QString::number(node->m_year) + 
				"\nid: " + QString::fromStdString(node->m_id) + "\nauthorName: " + QString::fromStdString(node->m_authorName) + "\nauthorNameShort: " 
				+ QString::fromStdString(node->m_authorNameShort) + "\nviewLabel: " + QString::fromStdString(m_viewLabel);
		}
		break;
	case 4:
		{
			TopicNode *node = (TopicNode*)this;
			messages = QString::number(m_NodeId) + "\ntopicWords: " + QString::fromStdString(node->m_topicWords) + "\ntopicDocuments: " + QString::fromStdString(node->m_topicDocuments);
		}
		break;
	default:
		break;
	}
	return messages;
}