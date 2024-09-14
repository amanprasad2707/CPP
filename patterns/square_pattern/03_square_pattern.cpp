/*
A B C D E
A B C D E
A B C D E
A B C D E
A B C D E
*/

#include <iostream>
using namespace std;
int main()
{
  int num = 0;
  cout << "Enter number: ";
  cin >> num;
  for (int i = 0; i < num; i++)
  {
    char ch = 'A';
    for (int j = 1; j <= num; j++)
    {
      cout << ch << " ";
      ch++;
    }
    cout << "\n";
  }
  return 0;
}

