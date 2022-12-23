#include"EdgeWeightGraph.h"


Graph::Graph(int V,int E)				//��ʼ��
{
	this->V = V;

	this->E = E;

	for (int i = 0; i != V; i++)
	{
		this->adj.push_back(0);
	}
}


int Graph::showE()				//��ȡ���������ͱߵ�����
{
	return E;
}

int Graph::showV()
{
	return V;
}


void Graph::addEdge(Edge e)		//��ͼ�м�һ����
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


std::string Graph::showEdge(int v)	//��ȡ�붥��v���ڵ����ж���
{
	std::string a;

	a = "�붥�� " + v;

	a += " ���ڵ����ж���Ϊ: ";

	Edge* ptr = adj[v];

	while (ptr)
	{
		a += ptr->other(v) + " ";

		ptr = ptr->next;
	}

	a += '\n';

	return a;
}


std::string Graph::showAllEdge()	//��ȡͼ
{
	std::string a;

	for (int i = 0; i < V; i++)

		a += Graph::showEdge(i);

	return a;
}