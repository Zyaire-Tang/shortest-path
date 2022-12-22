#include"EdgeWeightGraph.h"


Graph::Graph(int V)				//��ʼ��
{
	this->V = V;
	this->E = 0;
	for (int i = 0; i != V; i++)
		adj[i] = NULL;
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
	Edge e1 = Edge(v, w, e.showWeight());
	Edge e2 = Edge(v, w, e.showWeight());
	adj[v] = &e1;
	e1.next = temp1;
	adj[w] = &e2;
	e2.next = temp2;
	E++;
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