#ifndef AUTHORNODE_H
#define AUTHORNODE_H

#include "node.h"
#include <String>
#include <Windows.h>
using namespace std;

class AuthorNode:public Node
{
public:
    AuthorNode();
    string m_type;
    int m_year;
    string m_id;
    string m_authorName;
    string m_authorNameShort;
};

#endif // AUTHORNODE_H