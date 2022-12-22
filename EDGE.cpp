#include"EDGE.h"

//初始化
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

//获取顶点
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

//与其他边权重比较
int Edge::compareTo(Edge that)
{
	if (this->showWeight() < that.showWeight())
		return -1;
	else if (this->showWeight() > that.showWeight())
		return 1;
	else
		return 0;
}

//打印边
std::string Edge::toString()
{
	std::string a;
	a = v + ' ' + w + ' ' + weight;
	return a;
}