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
	cout << "������ͼ�Ķ��������" << endl;
	while (!(cin >> InV) || InV <= 1)						//���������
	{
		cin.clear();
		while (cin.get() != '\n')
			continue;
		cout << "������һ������һ����������" << endl;
	}
	cout << "������ͼ�ı�����" << endl;
	while (!(cin >> InE) || InE <= 0)						//���������
	{
		cin.clear();
		while (cin.get() != '\n')
			continue;
		cout << "������һ�����������������" << endl;
	}
	Graph graph = Graph(InV, InE);
	cout << "����������ߵ����������Ȩ�أ�������㿪ʼ����" << endl;
	for (int i = 0; i < InE; i++)					//����ͼ�еıߺ�Ȩ��
	{
		cout << "��" << i + 1 << "���ߵĵ�һ�����㣺" << endl;
		int w = 0;
		while (!(cin >> w) || w < 0 || w >= InV)						//���������
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "������һ���Ϸ��Ķ��㣺" << endl;
		}
		int v = 0;
		cout << "��" << i + 1 << "���ߵĵڶ������㣺" << endl;
		while (!(cin >> v) || v < 0 || v >= InV)						//���������
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "������һ���Ϸ��Ķ��㣺" << endl;
		}
		double weight = 0;
		cout << "��" << i + 1 << "���ߵ�Ȩ�أ�" << endl;
		while (!(cin >> weight) || weight <= 0)						//���������
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "������һ����Ȩ�أ�" << endl;
		}
		Edge e = Edge(w, v, weight);
		graph.addEdge(e);
	}
	int s = 0;
	cout << "�����뿪ʼ�Ķ��㣺" << endl;
	while (!(cin >> s) || s < 0 || s >= InV)						//���������
	{
		cin.clear();
		while (cin.get() != '\n')
			continue;
		cout << "������һ���Ϸ��Ķ��㣺" << endl;
	}
	BreathFirstSearch bfs = BreathFirstSearch(graph, s);
	cout << bfs.ShortestPath(graph, s) << endl;
	return 0;
}