#include"EDGE.h"

//��ʼ��
Edge::Edge(int v, int w, double weight)
{
	this->v = v;
	this->w = w;
	this->weight = weight;
}

double Edge::showWeight()
{
	return weight;
}

//��ȡ����
int Edge::either()
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

//��������Ȩ�رȽ�
int Edge::compareTo(Edge that)
{
	if (this->showWeight() < that.showWeight())
		return -1;
	else if (this->showWeight() > that.showWeight())
		return 1;
	else
		return 0;
}

//��ӡ��
std::string Edge::toString()
{
	std::string a;
	a = v + ' ' + w + ' ' + weight;
	return a;
}