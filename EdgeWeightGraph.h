#pragma once
#ifndef EDGEWEIGHTGRAPH_H
#define EDGEWEIGHTGRAPH_H
#include<vector>
#include"EDGE.h"
using std::vector;

class Graph
{
private:
	
	int V;					//顶点总数
	
	int E;					//边的总数

public:
	
	vector<Edge*> adj;		//用链表实现邻接数组

	Graph(int V,int E);

	int showV();

	int showE();

	void addEdge(Edge e);

	std::string showEdge(int v);

	std::string showAllEdge();
};
#endif // !EDGEWEIGHTGRAPH_H