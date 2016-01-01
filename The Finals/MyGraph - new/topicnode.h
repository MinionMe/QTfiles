#ifndef TOPICNODE_H
#define TOPICNODE_H
#include "node.h"
#include <string>
using namespace std;

class TopicNode:public Node
{
public:
    TopicNode();
    string m_topicWords;
    string m_topicDocuments;
};

#endif // TOPICNODE_H
