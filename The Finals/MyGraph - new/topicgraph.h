#ifndef TOPICGRAPH_H
#define TOPICGRAPH_H
#include "graph.h"
#include "topicnode.h"
#include "edge.h"
#include "Document.h"
#include <QString>
#include <map>

using namespace std;
class TopicGraph:public Graph
{
public:
    TopicGraph();
    virtual void loadData(QString str);
    map<int,Node*> m_node;
    vector<Edge*> m_edge;
	vector<Document> m_document;
};

#endif // TOPICGRAPH_H
