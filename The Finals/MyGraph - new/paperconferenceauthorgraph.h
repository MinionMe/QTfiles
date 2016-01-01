#ifndef PAPERCONFERENCEAUTHORGRAPH_H
#define PAPERCONFERENCEAUTHORGRAPH_H
#include "graph.h"
#include "papernode.h"
#include "conferencenode.h"
#include "authornode.h"
#include "edge.h"
#include <QColor>
#include <QString>

using namespace std;

class PaperConferenceAuthorGraph:public Graph
{
public:
    PaperConferenceAuthorGraph();
    virtual void loadData(QString str);
    map<int,Node*> m_node;
    vector<Edge*> m_edge;
};


#endif // PAPERCONFERENCEAUTHORGRAPH_H
