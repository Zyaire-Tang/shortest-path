#include"EdgeWeightGraph.h"
using std::vector;

//初始化
Graph::Graph(int V)
{
	this->V = V;
	this->E = 0;
	for (int i = 0; i != V; i++)
		adj[i] = NULL;
}

//获取顶点总数和边的总数
int Graph::showE()
{
	return E;
}

int Graph::showV()
{
	return V;
}

//在图中加一条边
void Graph::addEdge(Edge e)
{
	int v = e.either(), w = e.other(v);
	Edge* temp1 = adj[v];
	Edge* temp2 = adj[w];
	Edge e1 = Edge(v, w, e.showWeight());
	Edge e2 = Edge(v, w, e.showWeight());
	adj[v] = &e1;
	e1.next = temp1;
	adj[w] = &e2;
	e2.next = temp2;
	E++;
}

//读取与顶点v相邻的所有顶点
std::string Graph::showEdge(int v)
{
	std::string a;
	a = "与顶点 " + v;
	a += " 相邻的所有顶点为: ";
	Edge* ptr = adj[v];
	while (ptr)
	{
		a += ptr->other(v) + " ";
		ptr = ptr->next;
	}
	a += '\n';
	return a;
}

//读取图
std::string Graph::showAllEdge()
{
	std::string a;
	for (int i = 0; i < V; i++)
		a += Graph::showEdge(i);
	return a;
}