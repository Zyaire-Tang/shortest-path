#include"EdgeWeightGraph.h"
using std::vector;

//��ʼ��
Graph::Graph(int V)
{
	this->V = V;
	this->E = 0;
	for (int i = 0; i != V; i++)
		adj[i] = NULL;
}

//��ȡ���������ͱߵ�����
int Graph::showE()
{
	return E;
}

int Graph::showV()
{
	return V;
}

//��ͼ�м�һ����
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

//��ȡ�붥��v���ڵ����ж���
std::string Graph::showEdge(int v)
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

//��ȡͼ
std::string Graph::showAllEdge()
{
	std::string a;
	for (int i = 0; i < V; i++)
		a += Graph::showEdge(i);
	return a;
}