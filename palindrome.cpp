#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
  string name;
  cout << "Enter a name to test whether if it is palindrome or not!\n";
  cin >> name;
  int a = name.size()-1;
  for (int i= 0; i < name.size();i++)
  {
    if (i == a)
    {
      cout<<"It is palindrome!"<<endl;
      break;
    }
    if (name[i] == name[a-i])
      continue;
    else if (name[i] != name [a-i])
    {
      cout <<"It is not palindrome!"<<endl;
      break;
    }
  }
  return 0;
}
