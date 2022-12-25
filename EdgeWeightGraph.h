#pragma once
#ifndef EDGEWEIGHTGRAPH_H
#define EDGEWEIGHTGRAPH_H
#include<vector>
#include"EDGE.h"
using std::vector;

class Graph
{
private:
	
	int V;					//��������
	
	int E;					//�ߵ�����

public:
	
	vector<Edge*> adj;				//������ʵ���ڽ�����

	Graph(int V,int E);				//��ʼ��

	int showV();					//���ض�����

	int showE();					//���ر���

	void addEdge(Edge e);			//��ͼ�����һ����

	std::string showEdge(int v);	//��ӡ�붥��v����������б�

	std::string showAllEdge();		//��ӡ���б�
};
#endif // !EDGEWEIGHTGRAPH_H