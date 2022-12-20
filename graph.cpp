#include<vector>
using std::vector;
class graph
{
	int V;
	//������
	int E;
	//����
	vector<vector<double>> g;
	//�����ڽӾ���
public:	
	void initgraph(int V);
	void fillgraph(vector<vector<double>> g, vector<vector<int>> new_g);
	int hasedge(int from,int to);
	int VG();
	int EG();
};
//��ʼ���ڽӾ���
void graph::initgraph(int V)
{
	this->V = V;
	this->E = 0;
	for (int i = 0; i < V; i++)
		g[i] = { 0 };
}
//��ȡ����
void graph::fillgraph(vector<vector<double>> g, vector<vector<int>> new_g)
{
	for (int j = 0; j < sizeof(new_g) / 2; j++)
	{
		g[new_g[j][0]][new_g[j][1]] = 1;
		g[new_g[j][1]][new_g[j][0]] = 1;
	}
}
//�ж�����֮���Ƿ��б�
int graph::hasedge(int from, int to)
{
	if (g[from][to] || g[to][from])
		return 1;
	else
		return 0;
}
//��ȡ����
int graph::VG()
{
	return V;
}
//��ȡ������
int graph::EG()
{
	return E;
}