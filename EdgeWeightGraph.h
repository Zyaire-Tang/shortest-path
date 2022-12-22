#pragma once
#ifndef EDGEWEIGHTGRAPH_H
#define EDGEWEIGHTGRAPH_H
#include<vector>
#include"EDGE.h"
using std::vector;

class Graph
{
private:
	//顶点总数
	int V;
	//边的总数
	int E;
	//用链表实现邻接数组
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