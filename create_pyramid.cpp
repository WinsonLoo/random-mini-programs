#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int count = N + 1;
	cout << setw(N+2) << right << '*' <<endl;
	for (int i = 1; i < (N+N-1);i += 2)
	{
		cout << setw(count);
		for(int j = 0; j < i + 2 ;j++)
		{
		  cout << right << '*';
		}
		cout<<endl;
		count--;
	} 
	

}