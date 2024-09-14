#include <iostream>
using namespace std;

bool isPrime(int n){
  if (n < 2)  // Prime numbers are greater than 1
    return false;
  
  for (int i = 2; i <= n / 2; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

int main()
{
  for (int i = 0; i < 1000; i++)
  {
    if(isPrime(i)){
      cout << i << " ";
    }
  }
  cout << endl;
  
  // cout << isPrime(17) << endl;
  return 0;
}
