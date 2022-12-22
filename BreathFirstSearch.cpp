#include"BreathFirstSearch.h"
#include<algorithm>


BreathFirstSearch::BreathFirstSearch(Graph G, int s)	//��ʼ��
{

	for (int i = 0; i != G.showV(); i++)
		marked[i] = 0;

	for (int i = 0; i != G.showV(); i++)
		sumWeight[i] = 0;

	for (int i = 0; i != G.showV(); i++)
		edgeTo[i] = -1;

	this->s = s;

	bfs(G, s);
}

void BreathFirstSearch::bfs(Graph G, int s)				//�������������ʵ��
{
	vector<int> quene;			//�������д����ѱ�ǵ�δ��ʼ�����Ķ���

	marked[s] = 1;

	quene.push_back(s);

	while (!quene.empty())		//�����ڶ�����б������ұ��
	{
		int v = *quene.begin();

		quene.erase(quene.begin());

		Edge* p = NULL;

		p = G.adj[v];

		int w = p->other(v);

		while (p)
		{
			if (!marked[w])		//��δ����ǵĶ�����б��,��¼·�̲��������
			{
				sumWeight[w] = sumWeight[v] + p->showWeight();

				marked[w] = 1;

				edgeTo[w] = v;

				quene.push_back(w);
			}
			else if(marked[w])		//�������ѱ���ǵĶ���������·����
			{
				if (sumWeight[v] + p->showWeight() < sumWeight[w])
				{
					sumWeight[w] = sumWeight[v] + p->showWeight();

					edgeTo[w] = v;
				}
			}
			p = p->next;
		}
	}
}

std::string BreathFirstSearch::ShortestPath(Graph G,int s)		//��¼���·�̼����·��
{
	std::string a;
	for (int i = 0,j = 0; i < G.showV();i++)
	{
		if (i == s)

			continue;

		a = "���� " + s;

		a += " ������ " + i;

		a += " �����·��Ϊ: " + sumWeight[i];

		a += " ·��Ϊ: " + s;

		std::string b = 0;

		j = i;

		while (j != s)
		{
			b += edgeTo[j] + "	";

			j = edgeTo[j];
		}
		reverse(b.begin(), b.end());

		a += b;

		a += '\n';
	}

	return a;
}