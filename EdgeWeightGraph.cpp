#include"EdgeWeightGraph.h"


Graph::Graph(int V,int E)				//初始化
{
	this->V = V;

	this->E = E;

	for (int i = 0; i != V; i++)
	{
		this->adj.push_back(0);
	}
}


int Graph::showE()				//获取顶点总数和边的总数
{
	return E;
}

int Graph::showV()
{
	return V;
}


void Graph::addEdge(Edge e)		//在图中加一条边
{
	int v = e.either(), w = e.other(v);

	Edge* temp1 = adj[v];

	Edge* temp2 = adj[w];

	Edge* e1 = new Edge;

	Edge* e2 = new Edge;

	e1->v = v;

	e1->w = w;

	e1->weight = e.showWeight();

	e1->next = temp1;

	adj[v] = e1;

	e2->v = v;

	e2->w = w;

	e2->weight = e.showWeight();

	e2->next = temp2;

	adj[w] = e2;
}


std::string Graph::showEdge(int v)	//读取与顶点v相邻的所有顶点
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


std::string Graph::showAllEdge()	//读取图
{
	std::string a;

	for (int i = 0; i < V; i++)

		a += Graph::showEdge(i);

	return a;
}