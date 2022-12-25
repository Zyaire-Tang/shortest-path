#pragma once
#ifndef EDGE_H
#define EDGE_H
#include<string>
class Edge
{
public:

	int v;				//顶点

	int w;

	double weight;		//权重

	Edge* next;			//以链表的形式实现一个包，用于储存一个顶点的所有边

	Edge();

	Edge(int v, int w, double weight);			//初始化

	double showWeight();						//返回权重

	int either();								//获取其中一个顶点

	int other(int vertex);						//获取另外一个顶点

	int compareTo(Edge that);					//	两条边权重的比较

	std::string toString();						//打印这条边的信息
};
#endif// !EDGE_H