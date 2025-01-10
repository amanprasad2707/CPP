#include <iostream>
using namespace std;

/* Greatest Common Divisor or Highest Common Factor */
int gcd(int a, int b)
{
  int gcd = 1;
  if (a == 0)
    return b;
  if (b == 0)
    return a;
  for (int i = 1; i <= min(a, b); i++)
  {
    if (a % i == 0 && b % i == 0)
    {
      gcd = i;
    }
  }
  return gcd;
}

/* GCD using Euclid's Algorithm */
int GCD_Euclid(int a, int b)
{
  while (a > 0 && b > 0)
  {
    if (a > b)
    {
      a = a % b;
    }
    else
    {
      b = b % a;
    }
  }
  if (a == 0)
  {
    return b;
  }
  else
  {
    return a;
  }
}

int gcd1(int a, int b)
{
  while (b != 0)
  {
    int temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}

int gcdRec(int a, int b)
{
  if (b == 0)
    return a;
  return gcdRec(b, a % b);
}

int lcm(int a, int b)
{
  int gcd = gcd1(a, b);
  int lcm = (a * b) / gcd;
  return lcm;
}

int main()
{

  cout << "GCD using Euclid: " << GCD_Euclid(18, 24) << endl;
  cout << "GCD using Recursion: " << gcdRec(18, 24) << endl;
  // cout << gcd1(18, 24) << endl;
  cout << "LCM: " << lcm(20, 28) << endl;

  return 0;
}