#include"graph.cpp"
#include<vector>
class BreathFirstSearch
{
	graph g;
	vector<int> marked;
public:
	void initmarked(int v);
	void getmarked(int i);
	void markedvertex(int i);
};
void BreathFirstSearch::initmarked(int v)
{
	for (int i = 0; i < v; i++)
		marked[i] = 0;
}
void BreathFirstSearch::getmarked(int i)
{
	marked[i - 1] += 1;
}
void BreathFirstSearch::markedvertex(int i)
{
	marked[i - 1] = -1;
}