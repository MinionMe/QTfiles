#ifndef DOCUMENT_H
#define DOCUMENT_H
#include <string>
using namespace std;

class Document
{
public:
	Document(void);
	~Document(void);
	int m_documentId;
	string m_documentTitle;
	string m_documentText;
};

#endif DOCUMENT_H