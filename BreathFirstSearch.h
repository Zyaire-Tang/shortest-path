#pragma once
#ifndef BREATHFIRSTSEARCH_H
#define BREATHFIRSTSEARCH_H
#include"EdgeWeightGraph.h"

class BreathFirstSearch
{
private:

	vector<int> marked;         //����Ѿ��������Ķ���
	
	vector<int> sumWeight;      //��¼��ĳһ��������·

	vector<int> edgeTo;			//��¼�ö�����һ����
	
	int s;						//���

public:

	BreathFirstSearch(Graph G,int s);

	void bfs(Graph G, int s);

	std::string ShortestPath(Graph G,int s);
};
#endif // !BREATHFIRSTSEARCH_H