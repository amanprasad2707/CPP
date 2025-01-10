/*
A B C D E
F G H I J
K L M N O
P Q R S T
U V W X Y
*/

#include <iostream>
using namespace std;
int main()
{
  int num = 0;
  cout << "Enter number: ";
  cin >> num;
  char ch = 'A';
  for (int i = 0; i < num; i++)
  {
    for (int j = 1; j <= num; j++)
    {
      cout << ch << " ";
      ch++;
    }
    cout << "\n";
  }
  return 0;
}
