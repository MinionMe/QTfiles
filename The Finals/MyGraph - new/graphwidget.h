#ifndef GRAPHWIDGET_H
#define GRAPHWIDGET_H
#include <vtk-6.2/vtkSmartPointer.h>
#include <vtk-6.2/vtkMutableUndirectedGraph.h>
#include <vtk-6.2/vtkDataSetAttributes.h>
#include <vtk-6.2/vtkDoubleArray.h>
#include <vtk-6.2/vtkGraphLayoutView.h>
#include <vtk-6.2/vtkGraphLayout.h>
#include <vtk-6.2/vtkIntArray.h>
#include <vtk-6.2/vtkMutableUndirectedGraph.h>
#include <vtk-6.2/vtkRenderWindowInteractor.h>
#include <vtk-6.2/vtkPoints.h>
#include <vtk-6.2/vtkCircularLayoutStrategy.h>
#include <vtk-6.2/vtkFast2DLayoutStrategy.h>
#include <vtk-6.2/vtkForceDirectedLayoutStrategy.h>
#include <vtk-6.2/vtkPassThroughLayoutStrategy.h>
#include <vtk-6.2/vtkRandomLayoutStrategy.h>
#include <vtk-6.2/vtkSimple2DLayoutStrategy.h>
#include "stdafx.h"
#define VTK_CREATE(type, name) \
	vtkSmartPointer<type> name = vtkSmartPointer<type>::New()
#include <QGraphicsView>
#include "paperconferenceauthorgraph.h"
#include "topicgraph.h"
#include <QGraphicsScene>
#include <QColor>
#include <QLabel>

class Node;

//! [0]
class GraphWidget : public QGraphicsView
{
	Q_OBJECT

public:
	GraphWidget(QWidget *parent = 0);
	QColor setLineColor(int node_1,int node_2);
	void useVTKstrategy_PCA(int &edgeNum);
	void useVTKstrategy_Topic(int &edgeNum);
	const int R;	
	QLabel *label;
public slots:
	void shuffle();
	void rotLeft();
	void rotRight();
	void zoomIn();
	void zoomOut();
	void beginPaint();
	void setNoderadius();
	void setLineWidth();
	void saveGraph();
	void hideItem();
	void showItem();
	void searchNodeId();
	void searchNodeType();
	void setNodeColor();
	void setEdgeColor();
protected:
	void keyPressEvent(QKeyEvent *event) Q_DECL_OVERRIDE;
	void drawBackground(QPainter *painter, const QRectF &rect) Q_DECL_OVERRIDE;
private:
	int timerId;
};
//! [0]

#endif // GRAPHWIDGET_H