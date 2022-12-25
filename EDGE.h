#pragma once
#ifndef EDGE_H
#define EDGE_H
#include<string>
class Edge
{
public:

	int v;				//����

	int w;

	double weight;		//Ȩ��

	Edge* next;			//���������ʽʵ��һ���������ڴ���һ����������б�

	Edge();

	Edge(int v, int w, double weight);			//��ʼ��

	double showWeight();						//����Ȩ��

	int either();								//��ȡ����һ������

	int other(int vertex);						//��ȡ����һ������

	int compareTo(Edge that);					//	������Ȩ�صıȽ�

	std::string toString();						//��ӡ�����ߵ���Ϣ
};
#endif// !EDGE_H