#include <iostream>
#include <time.h>
#include <stdlib.h>

#define MAX 100

int main()
{
	int n = 0, m = 0;
	srand((unsigned)time(NULL));
	std::cout << "总人数:";
	std::cin >> n;
	std::cout << "筛选人数:";
	std::cin >> m;
	int a[MAX];
	int a_length = 0;
	for (int i = 0; i < m; i++)
	{	
		int found = 0;
		int temp = (rand() % n) + 1;
		for (int j = 0; j < a_length; j++)
			if (a[j] == temp)
			{
				i--;
				found = 1;
				break;
			}
		if (found == 1) continue;
		a[a_length++] = temp;
	}
	for (int i = 0; i < a_length; i++)
		std::cout << a[i] << " ";
	system("pause"); //in DevC++, you should delete this line
	return 0;
}