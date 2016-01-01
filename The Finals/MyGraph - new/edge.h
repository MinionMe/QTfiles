#ifndef EDGE_H
#define EDGE_H
#include <QGraphicsItem>
class Node;
class Edge:public QGraphicsItem
{
public:
    Edge();
	double m_scale;
	double m_width;
public:
	Edge(Node *sourceNode, Node *destNode);
	Node *sourceNode() const;
	Node *destNode() const;
	QColor setLineColor(int node_1,int node_2);
	void adjust();
	enum { Type = UserType + 2 };
	int type() const Q_DECL_OVERRIDE { return Type; }
protected:
	QRectF boundingRect() const Q_DECL_OVERRIDE;
	void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) Q_DECL_OVERRIDE;
public:
	Node *source, *dest;
	QColor m_color,m_tempColor;
	QPointF sourcePoint;
	QPointF destPoint;
	qreal arrowSize;
};

#endif // EDGE_H