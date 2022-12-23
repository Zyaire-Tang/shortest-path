#include"BreathFirstSearch.h"
#include<algorithm>


BreathFirstSearch::BreathFirstSearch(Graph G, int s)	//初始化
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

void BreathFirstSearch::bfs(Graph G, int s)				//广度优先搜索的实现
{
	vector<int> quene;			//创建队列储存已标记但未开始遍历的顶点

	marked[s] = 1;

	quene.push_back(s);

	while (!quene.empty())		//对相邻顶点进行遍历并且标记
	{
		int vv = *quene.begin();

		quene.erase(quene.begin());

		Edge* p = NULL;

		p = G.adj[vv];

		int ww = p->other(vv);

		while (p)
		{
			if (!marked[ww])		//将未被标记的顶点进行标记,记录路程并放入队列
			{
				sumWeight[ww] = sumWeight[vv] + p->showWeight();

				marked[ww] = 1;

				edgeTo[ww] = vv;

				quene.push_back(ww);
			}
			else if(marked[ww])		//对相邻已被标记的顶点进行最短路更新
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

std::string BreathFirstSearch::ShortestPath(Graph G,int s,int t)		//记录最短路程及最短路径
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