#include<iostream>

using namespace std;


int main()
{
	int a[] = {3,5,2,6,7,9,1}; //if use vector also can
	int N = sizeof(a) / sizeof(int); // find size of a[]
			/* 7x8 */	/*8*/       //== 7
			
	for (int i =1; i < N;i++)
	{
		int minIndex = i-1;
		for(int j=i-1; j < N ; j++)
		{
			if ( a[minIndex] > a[j])
				minIndex = j;
		}
		//swap function
		int temp = a[minIndex];
		a[minIndex] = a[i-1];
		a[i-1] = temp;
		
		
	}
	
	
	
}
