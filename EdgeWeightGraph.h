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
	
	vector<Edge*> adj;				//用链表实现邻接数组

	Graph(int V,int E);				//初始化

	int showV();					//返回顶点数

	int showE();					//返回边数

	void addEdge(Edge e);			//在图中添加一条边

	std::string showEdge(int v);	//打印与顶点v相关联的所有边

	std::string showAllEdge();		//打印所有边
};
#endif // !EDGEWEIGHTGRAPH_H