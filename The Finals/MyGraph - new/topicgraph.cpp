#include "topicgraph.h"

TopicGraph::TopicGraph()
{

}

void TopicGraph::loadData(QString str)
{
	ifstream infile(str.toStdString() + "/Nodes.txt");
	TopicNode* node_topic;
	string rubbishStr;
	char *pStr = new char [];
	for (int i = 0;i < 200;i++)
	{
		node_topic = new TopicNode;
		infile >> node_topic->m_NodeId;
		infile >> rubbishStr;
		infile.seekg(1,ios::cur);
		getline(infile,node_topic->m_topicWords);		
		infile >> rubbishStr;
		infile.seekg(1,ios::cur);
		getline(infile,node_topic->m_topicDocuments);
		node_topic->m_mapId = i;
		node_topic->m_typeId = 4;
		node_topic->m_color = node_topic->m_tempColor = Qt::cyan;
		m_node.insert(pair<int,Node*>(node_topic->m_NodeId,node_topic));
	}
	infile.close();
	infile.open(str.toStdString() + "/Edges.txt");
	Edge *egde_undirected;
	int m_id1,m_id2;
	while (!infile.eof())
	{
		infile >> m_id1;
		infile >> m_id2;
		egde_undirected = new Edge(m_node[m_id1],m_node[m_id2]);
		infile >> egde_undirected->m_scale;
		m_edge.push_back(egde_undirected);
	}
	infile.close();
	infile.open(str.toStdString() + "/DocumentContent.txt");
	Document document;
	while (!infile.eof())
	{
		infile >> document.m_documentId;
		infile.getline(pStr,20);
		getline(infile,document.m_documentTitle);
		getline(infile,document.m_documentText);
		m_document.push_back(document);
	}
	infile.close();
}