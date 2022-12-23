#include"BreathFirstSearch.h"
#include<algorithm>


BreathFirstSearch::BreathFirstSearch(Graph G, int s)	//��ʼ��
{

	for (int i = 0; i <= G.showV(); i++)
		this->marked.push_back(0);

	for (int i = 0; i <= G.showV(); i++)
		this->sumWeight.push_back(0);

	for (int i = 0; i <= G.showV(); i++)
		this->edgeTo.push_back(-1);

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
		int vv = *quene.begin();

		quene.erase(quene.begin());

		Edge* p = NULL;

		p = G.adj[vv];

		int ww = p->other(vv);

		while (p)
		{
			if (!marked[ww])		//��δ����ǵĶ�����б��,��¼·�̲��������
			{
				sumWeight[ww] = sumWeight[vv] + p->showWeight();

				marked[ww] = 1;

				edgeTo[ww] = vv;

				quene.push_back(ww);
			}
			else if(marked[ww])		//�������ѱ���ǵĶ���������·����
			{
				if (sumWeight[vv] + p->showWeight() < sumWeight[ww])
				{
					sumWeight[ww] = sumWeight[vv] + p->showWeight();

					edgeTo[ww] = vv;
				}
			}
			p = p->next;
		}
	}
}

std::string BreathFirstSearch::ShortestPath(Graph G,int s,int t)		//��¼���·�̼����·��
{
	std::string a;

	a = "shorst path: ";

		std::string b = std::to_string(t);

		int j = t;

		while (j != s)
		{
			b += ' ' + std::to_string(edgeTo[j]);

			j = edgeTo[j];
		}
		reverse(b.begin(), b.end());

		a += b;

		a += '\n';

		a += "shortest weight: " + std::to_string(sumWeight[t]);
	

	return a;
}