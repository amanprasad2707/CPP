#include <iostream>
using namespace std;

int fibonacci(int n)
{
  if (n == 0)
    return 0;
  if (n == 1)
    return 1;
    
  int num1 = 0;
  int num2 = 1;
  for (int i = 2; i <= n; i++)
  {
    int nextNum = num1 + num2;
    num1 = num2;
    num2 = nextNum;
  }
  return num2;
}

int main()
{
  for (int i = 0; i < 30; i++)
  {
    cout << fibonacci(i) << " ";
  }
  cout << endl;
  
  return 0;
}
