#include<vector>
using std::vector;
class graph
{
	int V;
	//顶点数
	int E;
	//边数
	vector<vector<double>> g;
	//创建邻接矩阵
public:	
	void initgraph(int V);
	void fillgraph(vector<vector<double>> g, vector<vector<int>> new_g);
	int hasedge(int from,int to);
	int VG();
	int EG();
};
//初始化邻接矩阵
void graph::initgraph(int V)
{
	this->V = V;
	this->E = 0;
	for (int i = 0; i < V; i++)
		g[i] = { 0 };
}
//读取顶点
void graph::fillgraph(vector<vector<double>> g, vector<vector<int>> new_g)
{
	for (int j = 0; j < sizeof(new_g) / 2; j++)
	{
		g[new_g[j][0]][new_g[j][1]] = 1;
		g[new_g[j][1]][new_g[j][0]] = 1;
	}
}
//判断两点之间是否有边
int graph::hasedge(int from, int to)
{
	if (g[from][to] || g[to][from])
		return 1;
	else
		return 0;
}
//读取边数
int graph::VG()
{
	return V;
}
//读取顶点数
int graph::EG()
{
	return E;
}