#ifndef PAPERNODE_H
#define PAPERNODE_H
#include "node.h"
#include <String>
#include <Windows.h>
using namespace std;

class PaperNode:public Node
{
public:
    PaperNode();
    string m_type;
    int m_year;
    string m_authors;
    int m_dataFrom;
    string m_id;
    int m_pageFrom;
    string m_paperTitle;
    string m_paperTitleShort;
};

#endif // PAPERNODE_H
