#include <iostream>
using namespace std;

class Line
{
	double data1[3];
	char temp1[3];
	double data2[3];
	char temp2[3];
	
public:
	void input()//ask user to input the 2 lines and process the data so that infront of y is always 1
	{
		double y1;
		double y2;
		cout << "Insert line 1 as following format(ay=mx+c) without any spacing e.g.: 1y=2x+3:\n";
		cin >> data1[0] >> temp1[0]>> temp1[1]>> data1[1] >> temp1[2]>> data1[2];	
		cout << "Insert line 2 as following format(ay=mx+c) without any spacing e.g.: 1y=2x+3:\n";
		cin >> data2[0] >> temp2[0]>> temp2[1]>> data2[1] >> temp2[2]>> data2[2];
		
		//data processing
		y1 = data1[0];
		y2 = data2[0];
		for(int i = 0; i < 3;i++)
		{
			data1[i] /= y1;
			data2[i] /= y2;
		}
	}
	friend void intersection(Line a);//calculate x-coordinate and y-coordinate
	friend bool parallel(Line a);
};

void intersection(Line a)
{
	//find x
	double x_coordinate = (a.data2[2]-a.data1[2])/ (a.data1[1]-a.data2[1]);
	//find y
	double y_coordinate = a.data1[1]*x_coordinate + a.data1[2];
	cout << "The 2 lines are not parallel, the intersection of x-coordinate is " << x_coordinate 
	     << " the intersection of y-coordinate is " << y_coordinate <<"." << endl;
}

bool parallel(Line a)
{
	if(a.data1[1] == a.data2[1])
		return true;
	return false;
}

int main(){
	Line line;
	line.input();
	if (parallel(line))
		cout << "The 2 lines are parallel, no intersection points available." << endl;
	else 
		intersection(line);
	
	return 0;
}


















