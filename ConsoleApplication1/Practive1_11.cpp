#include <iostream>
/*
	while()����
	����������������ӡ����������ֵ��Χ�ڵ�����
*/

int main()
{
	std::cout << "�����������������ó��䷶Χ����������:"
		<< std::endl;
	int v1, v2 = 0;
	std::cin >> v1 >> v2;
	std::cout << v1 << "��" << v2 << "֮���������:";
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