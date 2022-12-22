#pragma once
#ifndef EDGEWEIGHTGRAPH_H
#define EDGEWEIGHTGRAPH_H
#include<vector>
#include"EDGE.h"
using std::vector;

class Graph
{
private:
	//��������
	int V;
	//�ߵ�����
	int E;
	//������ʵ���ڽ�����
	vector<Edge*> adj;

public:
	Graph(int V);
	int showV();
	int showE();
	void addEdge(Edge e);
	std::string showEdge(int v);
	std::string showAllEdge();
};
#endif // !EDGEWEIGHTGRAPH_H