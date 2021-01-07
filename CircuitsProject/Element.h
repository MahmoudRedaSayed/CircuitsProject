#pragma once
#include"Node.h"
#include"Global.h"

class Element
{
public:
	Element(Node* StartNd, Node* EndNd,string);
	virtual ~Element();
	Node* GetStartNode();
	Node* GetEndNode();
	string Name;
protected:
	Node* StartNode;
	Node* EndNode;
	
};

Element::Element(Node* StartNd,Node* EndNd,string nm)
{
	StartNode=StartNd;
	EndNode=EndNd;
	Name = nm;

}
Node* Element::GetStartNode()
{
	return StartNode;
}
Node* Element::GetEndNode()
{
	return EndNode;
}
Element::~Element()
{
}