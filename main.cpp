#include"BreathFirstSearch.h"
#include"EDGE.h"
#include"EdgeWeightGraph.h"
#include<iostream>
#include<cctype>

int main()
{
	int InV = 0, InE = 0;
	std::cout << "请输入图的顶点个数：" << std::endl;
	std::cin >> InV;
	while (!isdigit(InV) && InV <= 1)
	{
			std::cout << "请输入一个大于一的正整数" << std::endl;
			std::cin >> InV;
	}
	std::cout << "请输入图的边数：" << std::endl;
	std::cin >> InE;
	while (!isdigit(InE) && InE <= 0)
	{
		std::cout << "请输入一个正整数" << std::endl;
		std::cin >> InE;
	}
	return 0;
}