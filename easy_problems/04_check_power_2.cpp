// if number of set bits is one then it is the power of 2
#include <iostream>
using namespace std;

bool isPowerOfTwo(int n){
  int ans = 1;
  for (int i = 0; i < 31; i++){
    if (ans == n){
      return true;
    }
    ans *= 2;
  }
  return false;
}

bool checkPowerOfTwo(int n)
{
  if (n > 0 && (n & (n - 1)) == 0)
  {
    return true;
  }
  else
  {
    return false;
  }
}

int main()
{
  int num;
  cout << "Enter number to check if it's a power of two: ";
  cin >> num;
  cout << checkPowerOfTwo(num) << endl;
  cout << isPowerOfTwo(num) << endl;
  return 0;
}
