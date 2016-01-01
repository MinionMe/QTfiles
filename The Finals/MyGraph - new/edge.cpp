#include "edge.h"
#include "node.h"
#include <math.h>
#include <QPainter>

static const double Pi = 3.14159265358979323846264338327950288419717;
static double TwoPi = 2.0 * Pi;

Edge::Edge()
{
	m_scale = 0.0;
}
Edge::Edge(Node *sourceNode, Node *destNode)
	: arrowSize(10),m_scale(0.0),m_width(0.4)
{
	setAcceptedMouseButtons(0);
	source = sourceNode;
	dest = destNode;
	source->addEdge(this);
	dest->addEdge(this);
	m_tempColor = m_color = setLineColor(source->m_typeId,dest->m_typeId);
	adjust();
}
//! [0]

//! [1]
Node *Edge::sourceNode() const
{
	return source;
}

Node *Edge::destNode() const
{
	return dest;
}
//! [1]

//! [2]
void Edge::adjust()
{
	if (!source || !dest)
		return;

	QLineF line(mapFromItem(source, 0, 0), mapFromItem(dest, 0, 0));

	prepareGeometryChange();
	sourcePoint = source->pos();
	destPoint = dest->pos();
}
//! [2]

//! [3]
QRectF Edge::boundingRect() const
{
	if (!source || !dest)
		return QRectF();

	qreal penWidth = 1;
	qreal extra = (penWidth + arrowSize) / 2.0;

	return QRectF(sourcePoint, QSizeF(destPoint.x() - sourcePoint.x(),destPoint.y() - sourcePoint.y())).normalized().adjusted(-extra, -extra, extra, extra);
}
//! [3]

//! [4]
void Edge::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *)
{
	if (!source || !dest)
		return;

	QLineF line(sourcePoint, destPoint);
	if (qFuzzyCompare(line.length(), qreal(0.)))
		return;
	//! [4]

	//! [5]
	// Draw the line itself
	painter->setPen(QPen(m_color, m_width));
	painter->drawLine(line);
	//! [5]
}
//! [6]

QColor Edge::setLineColor(int node_1,int node_2)
{
	switch (node_1 + node_2)
	{
	case 2:
		return Qt::darkGray;
	case 6:
		return Qt::darkGreen;
	case 8:
		return Qt::blue;
	default:
		return Qt::cyan;
		break;
	}
}