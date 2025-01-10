#include <iostream>
using namespace std;
bool isArmstrong(int n)
{
	int num = n;
	int sum = 0;
	while (n != 0)
	{
		int digit = n % 10;
		sum += digit * digit * digit;
		n /= 10;
	}
	if (sum == num)
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
	int n = 153;
	cout << isArmstrong(n) << endl;
	return 0;
}
