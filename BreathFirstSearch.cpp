#include"BreathFirstSearch.h"
#include<algorithm>


BreathFirstSearch::BreathFirstSearch(Graph G, int s)	//初始化
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

void BreathFirstSearch::bfs(Graph G, int s)				//广度优先搜索的实现
{
	vector<int> quene;			//创建队列储存已标记但未开始遍历的顶点

	marked[s] = 1;

	quene.push_back(s);

	while (!quene.empty())		//对相邻顶点进行遍历并且标记
	{
		int v = *quene.begin();

		quene.erase(quene.begin());

		Edge* p = NULL;

		p = G.adj[v];

		int w = p->other(v);

		while (p)
		{
			if (!marked[w])		//将未被标记的顶点进行标记,记录路程并放入队列
			{
				sumWeight[w] = sumWeight[v] + p->showWeight();

				marked[w] = 1;

				edgeTo[w] = v;

				quene.push_back(w);
			}
			else if(marked[w])		//对相邻已被标记的顶点进行最短路更新
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

std::string BreathFirstSearch::ShortestPath(Graph G,int s)		//记录最短路程及最短路径
{
	std::string a;
	for (int i = 0,j = 0; i < G.showV();i++)
	{
		if (i == s)

			continue;

		a = "顶点 " + s;

		a += " 到顶点 " + i;

		a += " 的最短路程为: " + sumWeight[i];

		a += " 路径为: " + s;

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