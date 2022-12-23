#include"EDGE.h"


Edge::Edge() {};

Edge::Edge(int v, int w, double weight)		//��ʼ��
{
	this->v = v;
	this->w = w;
	this->weight = weight;
	this->next = NULL;
}

double Edge::showWeight()
{
	return weight;
}


int Edge::either()							//��ȡ����
{
	return v;
}

int Edge::other(int vertex)
{
	if (vertex == v)
		return w;
	else if (vertex == w)
		return v;
}


int Edge::compareTo(Edge that)				//��������Ȩ�رȽ�
{
	if (this->showWeight() < that.showWeight())
		return -1;
	else if (this->showWeight() > that.showWeight())
		return 1;
	else
		return 0;
}


std::string Edge::toString()				//��ӡ��
{
	std::string a;
	a = v + ' ' + w + ' ' + weight;
	return a;
}