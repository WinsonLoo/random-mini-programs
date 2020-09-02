#include<iostream>

int main()
{
	int A;
	
	std::cout << "Enter your input:" << std::endl;
	std::cin >> A;
	
	char array[A][A];
	
	for(int i = 0; i < A; i++)
	{
		for(int j = 0; j < A; j++)
		{
			std::cout << i << j;
			array[i][j] = ' ';
		}
	}
	
	int temp = A-1;
	for(int i = 0; i < A; i++)
	{
		array[i][i]='X';
		array[i][temp-i]='X';
		for(int j = 0; j < A; j++)
		{
			//std::cout << i << j;
			std::cout<<array[i][j];
		}
		std::cout<<std::endl;
	}
}
