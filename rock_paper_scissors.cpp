#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void determine(int player,int computer);
int main()
{
	srand(time(NULL));
	int playerInput;
	int computerOutput = rand()%3+1;
	cout <<"You are challanged to a duel in rock paper scissors against computer!" << endl;
	cout <<"Enter what u want to choose:"<< endl;
	cout <<"1.Scissors\n2.Rock\n3.Paper" << endl;
	cin >> playerInput;
	
	determine(playerInput,computerOutput);
}

void determine(int player,int computer)
{
	if (player == computer)
		cout << "Computer uses the same sign!Draw."<< endl;
	
	else if(player == 1 && computer == 2)
		cout << "Computer uses Rock! You lost." << endl;
	else if(player == 1 && computer == 3)
		cout << "Computer uses Paper! You win." << endl;
	
	else if(player == 2 && computer == 1)
		cout << "Computer uses Scissors! You win." << endl;
	else if(player == 2 && computer == 3)
		cout << "Computer uses Paper! You lost." << endl;	

	else if(player == 3 && computer == 1)
		cout << "Computer uses Scissors! You lose." << endl;
	else if(player == 3 && computer == 2)
		cout << "Computer uses Rock! You win." << endl;	
}