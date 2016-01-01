#ifndef NODE_H
#define NODE_H
#include <string>
#include <QColor>
#include <sstream>
#include <QString>
#include <QGraphicsItem>

using namespace std;
class Edge;
class GraphWidget;
QT_BEGIN_NAMESPACE
class QGraphicsSceneMouseEvent;
QT_END_NAMESPACE

class Node:public QGraphicsItem
{
public:
    int m_NodeId;
	int m_typeId;
	int m_mapId;
	QColor m_color;
	QColor m_tempColor;
	string m_viewLabel;
	double m_radius;
	QString messages;
public:
	Node(GraphWidget *graphWidget = 0);
	void addEdge(Edge *edge);
	QList<Edge *> edges() const;
	enum { Type = UserType + 1 };
	int type() const Q_DECL_OVERRIDE { return Type; }
	bool advance();
	QString setText();
	/*void calculateForces();*/
	QRectF boundingRect() const Q_DECL_OVERRIDE;
	QPainterPath shape() const Q_DECL_OVERRIDE;
	void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) Q_DECL_OVERRIDE;
protected:
	QVariant itemChange(GraphicsItemChange change, const QVariant &value) Q_DECL_OVERRIDE;
	void mousePressEvent(QGraphicsSceneMouseEvent *event) Q_DECL_OVERRIDE;
	void mouseReleaseEvent(QGraphicsSceneMouseEvent *event) Q_DECL_OVERRIDE;

public:
	QList<Edge *> edgeList;
	QPointF newPos;
	GraphWidget *graph;
};

#endif // NODE_H
