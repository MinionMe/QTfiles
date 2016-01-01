#ifndef CONFERENCENODE_H
#define CONFERENCENODE_H

#include "node.h"
#include <String>
#include <Windows.h>
using namespace std;
class ConferenceNode:public Node
{
public:
    ConferenceNode();
    string m_type;
    int m_year;
    string m_id;
    string m_conferenceName;
    string m_conferenceNameShort;
};
#endif // CONFERENCENODE_H