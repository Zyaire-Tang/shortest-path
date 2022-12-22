#pragma once
#ifndef EDGE_H
#define EDGE_H
#include<string>
class Edge
{
private:
	int v;
	int w;
	double weight;

public:
	Edge* next;
	Edge(int v, int w, double weight);
	double showWeight();
	int either();
	int other(int vertex);
	int compareTo(Edge that);
	std::string toString();
};
#endif// !EDGE_H