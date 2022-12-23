#include"BreathFirstSearch.h"
#include"EDGE.h"
#include"EdgeWeightGraph.h"
#include<iostream>
#include<cctype>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int InV = 0, InE = 0;

	cout << "请输入图的顶点个数：" << endl;

	while (!(cin >> InV) || InV <= 1)						//输入出错处理
	{
		cin.clear();

		while (cin.get() != '\n')
			continue;

		cout << "请输入一个大于一的正整数：" << endl;
	}

	cout << "请输入图的边数：" << endl;

	while (!(cin >> InE) || InE <= 0)						
	{
		cin.clear();

		while (cin.get() != '\n')
			continue;

		cout << "请输入一个大于零的正整数：" << endl;
	}
	Graph graph = Graph(InV, InE);

	cout << "请依次输入边的两个顶点和权重（顶点从零开始）：" << endl;

	for (int i = 0; i < InE; i++)					//输入图中的边和权重
	{
		cout << "第" << i + 1 << "条边的第一个顶点：" << endl;

		int www = 0;

		while (!(cin >> www) || www < 0 || www >= InV)						
		{
			cin.clear();

			while (cin.get() != '\n')
				continue;

			cout << "请输入一个合法的顶点：" << endl;
		}

		int vvv = 0;

		cout << "第" << i + 1 << "条边的第二个顶点：" << endl;

		while (!(cin >> vvv) || vvv < 0 || vvv >= InV)						
		{
			cin.clear();

			while (cin.get() != '\n')
				continue;

			cout << "请输入一个合法的顶点：" << endl;
		}

		double weight_ = 0;

		cout << "第" << i + 1 << "条边的权重：" << endl;

		while (!(cin >> weight_) || weight_ <= 0)						
		{
			cin.clear();

			while (cin.get() != '\n')
				continue;

			cout << "请输入一个正权重：" << endl;
		}

		Edge e = Edge(www, vvv, weight_);

		graph.addEdge(e);
	}

	int ss = 0;

	cout << "请输入开始的顶点：" << endl;

	while (!(cin >> ss) || ss < 0 || ss >= InV)						
	{
		cin.clear();

		while (cin.get() != '\n')
			continue;

		cout << "请输入一个合法的顶点：" << endl;
	}

	int tt = 0;

	cout << "请输入结束的顶点：" << endl;

	while (!(cin >> tt) || tt < 0 || tt >= InV)						
	{
		cin.clear();

		while (cin.get() != '\n')
			continue;

		cout << "请输入一个合法的顶点：" << endl;
	}
	BreathFirstSearch bfs = BreathFirstSearch(graph, ss);

	cout << bfs.ShortestPath(graph, ss,tt) << endl;

	return 0;
}