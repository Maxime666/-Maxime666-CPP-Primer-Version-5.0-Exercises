#include <iostream>
/*
	while()函数
	输入两个整数，打印出该两个数值范围内的整数
*/

int main()
{
	std::cout << "请输入两个整数，得出其范围内所有整数:"
		<< std::endl;
	int v1, v2 = 0;
	std::cin >> v1 >> v2;
	std::cout << v1 << "和" << v2 << "之间的整数有:";
	if (v1 <= v2)
	{
		int i = v1;
		while (i >= v1&&i < v2)
		{
			++i;
			if (i != v2)
			{
				std::cout << i << " ";
			}
		}
	}
	if (v1 >= v2)
	{
		int i = v2;
		while (i >= v2&&i < v1)
		{
			++i;
			if (i != v1)
			{
				std::cout << i << " ";
			}
		}
	}
	return 0;
}