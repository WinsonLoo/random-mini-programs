#include<iostream>

using namespace std;


int main()
{
	int a[] = {3,5,2,6,7,9,1}; //if use vector also can
	int size = sizeof(a) / sizeof(int); // find size of a[]
			   /* 7x8 */	/*8*/       //== 7
	
	//bubble sort for ascending order
	for (int i = 1;i < size ; i++)
		for (int j = 1;j < size ; j++)
			if (a[j-1] > a[j])
			{
				//swapping
				int temp = a[j-1];
				a[j-1] = a[j];
				a[j] = temp;
			}
			
	//display array
	for(int i = 0; i < size; i++)
		cout << a[i] << endl;
}
