#include"BreathFirstSearch.h"
#include"EDGE.h"
#include"EdgeWeightGraph.h"
#include<iostream>
#include<cctype>

int main()
{
	int InV = 0, InE = 0;
	std::cout << "������ͼ�Ķ��������" << std::endl;
	std::cin >> InV;
	while (!isdigit(InV) && InV <= 1)
	{
			std::cout << "������һ������һ��������" << std::endl;
			std::cin >> InV;
	}
	std::cout << "������ͼ�ı�����" << std::endl;
	std::cin >> InE;
	while (!isdigit(InE) && InE <= 0)
	{
		std::cout << "������һ��������" << std::endl;
		std::cin >> InE;
	}
	return 0;
}