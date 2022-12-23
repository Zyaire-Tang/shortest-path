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

	while (!(cin >> InE) || InE <= 0)						
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

		int www = 0;

		while (!(cin >> www) || www < 0 || www >= InV)						
		{
			cin.clear();

			while (cin.get() != '\n')
				continue;

			cout << "������һ���Ϸ��Ķ��㣺" << endl;
		}

		int vvv = 0;

		cout << "��" << i + 1 << "���ߵĵڶ������㣺" << endl;

		while (!(cin >> vvv) || vvv < 0 || vvv >= InV)						
		{
			cin.clear();

			while (cin.get() != '\n')
				continue;

			cout << "������һ���Ϸ��Ķ��㣺" << endl;
		}

		double weight_ = 0;

		cout << "��" << i + 1 << "���ߵ�Ȩ�أ�" << endl;

		while (!(cin >> weight_) || weight_ <= 0)						
		{
			cin.clear();

			while (cin.get() != '\n')
				continue;

			cout << "������һ����Ȩ�أ�" << endl;
		}

		Edge e = Edge(www, vvv, weight_);

		graph.addEdge(e);
	}

	int ss = 0;

	cout << "�����뿪ʼ�Ķ��㣺" << endl;

	while (!(cin >> ss) || ss < 0 || ss >= InV)						
	{
		cin.clear();

		while (cin.get() != '\n')
			continue;

		cout << "������һ���Ϸ��Ķ��㣺" << endl;
	}

	int tt = 0;

	cout << "����������Ķ��㣺" << endl;

	while (!(cin >> tt) || tt < 0 || tt >= InV)						
	{
		cin.clear();

		while (cin.get() != '\n')
			continue;

		cout << "������һ���Ϸ��Ķ��㣺" << endl;
	}
	BreathFirstSearch bfs = BreathFirstSearch(graph, ss);

	cout << bfs.ShortestPath(graph, ss,tt) << endl;

	return 0;
}