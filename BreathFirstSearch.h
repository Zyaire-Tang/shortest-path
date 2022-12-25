#pragma once
#ifndef BREATHFIRSTSEARCH_H
#define BREATHFIRSTSEARCH_H
#include"EdgeWeightGraph.h"

class BreathFirstSearch
{
private:

	vector<int> marked;         //标记已经遍历过的顶点
	
	vector<double> sumWeight;      //记录到某一顶点的最短路

	vector<int> edgeTo;			//记录该顶点上一顶点
	
	int s;						//起点

public:

	BreathFirstSearch(Graph G,int s);				//初始化并且求出最短路径

	void bfs(Graph G, int s);						//广度优先搜索

	std::string ShortestPath(Graph G,int s,int t);	//打印最小权重和最短路
};
#endif // !BREATHFIRSTSEARCH_H