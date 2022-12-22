#pragma once
#ifndef EDGE_H
#define EDGE_H
#include<string>
class Edge
{
private:

	int v;				//顶点

	int w;

	double weight;		//权重

public:
	
	Edge* next;			//以链表的形式实现一个包，用于储存一个顶点的所有边

	Edge(int v, int w, double weight);

	double showWeight();

	int either();

	int other(int vertex);

	int compareTo(Edge that);

	std::string toString();
};
#endif// !EDGE_H