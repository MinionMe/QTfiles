#include "paperconferenceauthorgraph.h"
#include "graphwidget.h"
#include <QDebug>

PaperConferenceAuthorGraph::PaperConferenceAuthorGraph()
{

}

void PaperConferenceAuthorGraph::loadData(QString str)
{
    ifstream infile(str.toStdString() + "/Nodes.txt");
	char* pStr = new char [];
	string rubbishStr,tempType;	
	int tempNodeId,viewColor_a,viewColor_b,viewColor_r,viewColor_g;
	double viewLayout_x,viewLayout_y,viewLayout_z;
	PaperNode* node_paper;
	ConferenceNode* node_conference;
	AuthorNode* node_author;
	for (int i = 0;i < 200;i++)
	{
		infile >> tempNodeId;
		infile >> rubbishStr;
		infile >> tempType;
		if (tempType == "paper")
		{
			node_paper = new PaperNode;
			node_paper->m_NodeId = tempNodeId;
			node_paper->m_typeId = 1;
			infile >> rubbishStr;
			infile >> node_paper->m_year;
			infile >> rubbishStr;
			infile.seekg(1,ios::cur);
			getline(infile,node_paper->m_authors);
			infile >> rubbishStr;
			infile >> node_paper->m_dataFrom;
			infile >> rubbishStr;
			infile >> node_paper->m_id;
			infile >> rubbishStr;
			infile >> node_paper->m_pageFrom;
			infile >> rubbishStr;
			infile.seekg(1,ios::cur);
			getline(infile,node_paper->m_paperTitle);
			infile >> rubbishStr;
			infile.seekg(1,ios::cur);
			getline(infile,node_paper->m_paperTitleShort);
			infile >> rubbishStr;
			infile.seekg(2,ios::cur);		
			infile >> viewColor_r;
			infile.seekg(1,ios::cur);	
			infile >> viewColor_g;
			infile.seekg(1,ios::cur);	
			infile >> viewColor_b;
			infile.seekg(1,ios::cur);	
			infile >> viewColor_a;
			node_paper->m_color = QColor(viewColor_r,viewColor_g,viewColor_b,viewColor_a);
			node_paper->m_tempColor = node_paper->m_color;
			infile >> rubbishStr;
			infile >> rubbishStr;
			infile.seekg(1,ios::cur);
			getline(infile,node_paper->m_viewLabel);
			infile >> rubbishStr;
			infile.seekg(2,ios::cur);
			infile >> viewLayout_x;
			infile.seekg(1,ios::cur);	
			infile >> viewLayout_y;
			infile.seekg(1,ios::cur);	
			infile >> viewLayout_z;
			node_paper->m_mapId = i;
			node_paper->graph = new GraphWidget;
			node_paper->setPos(viewLayout_x,viewLayout_y);
			m_node.insert(pair<int,Node*>(tempNodeId,node_paper));
			infile.getline(pStr,20);
		}
		if (tempType == "conference")
		{
			node_conference = new ConferenceNode;
			node_conference->m_NodeId = tempNodeId;
			node_conference->m_typeId = 2;
			infile >> rubbishStr;
			infile >> node_conference->m_year;
			infile >> rubbishStr;
			infile >> node_conference->m_id;
			infile >> rubbishStr;
			infile.seekg(1,ios::cur);
			getline(infile,node_conference->m_conferenceName);
			infile >> rubbishStr;
			infile.seekg(1,ios::cur);
			getline(infile,node_conference->m_conferenceNameShort);
			infile >> rubbishStr;
			infile.seekg(2,ios::cur);		
			infile >> viewColor_r;
			infile.seekg(1,ios::cur);	
			infile >> viewColor_g;
			infile.seekg(1,ios::cur);	
			infile >> viewColor_b;
			infile.seekg(1,ios::cur);	
			infile >> viewColor_a;
			node_conference->m_color = QColor(viewColor_r,viewColor_g,viewColor_b,viewColor_a);
			node_conference->m_tempColor = node_conference->m_color;
			infile >> rubbishStr;
			infile >> rubbishStr;
			infile.seekg(1,ios::cur);
			getline(infile,node_conference->m_viewLabel);
			infile >> rubbishStr;
			infile.seekg(2,ios::cur);
			infile >> viewLayout_x;
			infile.seekg(1,ios::cur);	
			infile >> viewLayout_y;
			infile.seekg(1,ios::cur);	
			infile >> viewLayout_z;
			node_conference->m_mapId = i;
			node_conference->graph = new GraphWidget;
			node_conference->setPos(viewLayout_x,viewLayout_y);
			m_node.insert(pair<int,Node*>(tempNodeId,node_conference));
			infile.getline(pStr,200);
		}
		if (tempType == "author")
		{
			node_author = new AuthorNode;
			node_author->m_NodeId = tempNodeId;
			node_author->m_typeId = 3;
			infile >> rubbishStr;
			infile >> node_author->m_year;
			infile >> rubbishStr;
			infile >> node_author->m_id;
			infile >> rubbishStr;
			infile.seekg(1,ios::cur);
			getline(infile,node_author->m_authorName);
			infile >> rubbishStr;
			infile.seekg(1,ios::cur);
			getline(infile,node_author->m_authorNameShort);
			infile >> rubbishStr;
			infile.seekg(2,ios::cur);		
			infile >> viewColor_r;
			infile.seekg(1,ios::cur);	
			infile >> viewColor_g;
			infile.seekg(1,ios::cur);	
			infile >> viewColor_b;
			infile.seekg(1,ios::cur);	
			infile >> viewColor_a;
			node_author->m_color = QColor(viewColor_r,viewColor_g,viewColor_b,viewColor_a);
			node_author->m_tempColor = node_author->m_color;
			infile >> rubbishStr;
			infile >> rubbishStr;
			infile.seekg(1,ios::cur);
			getline(infile,node_author->m_viewLabel);
			infile >> rubbishStr;
			infile.seekg(2,ios::cur);
			infile >> viewLayout_x;
			infile.seekg(1,ios::cur);	
			infile >> viewLayout_y;
			infile.seekg(1,ios::cur);	
			infile >> viewLayout_z;
			node_author->m_mapId = i;
			node_author->graph = new GraphWidget;
			node_author->setPos(viewLayout_x,viewLayout_y);
			m_node.insert(pair<int,Node*>(tempNodeId,node_author));
			infile.getline(pStr,200);
		}
	}
	infile.close();
	infile.open(str.toStdString() + "/Edges.txt");
	Edge *tempEdge;	
	int m_id1,m_id2;
	while (!infile.eof( ))
	{
		infile >> m_id1;
		infile >> m_id2;
		tempEdge = new Edge(m_node[m_id1],m_node[m_id2]);
		m_edge.push_back(tempEdge);
	} 
	qDebug() << m_node.size();
	qDebug() << m_edge.size();
}
