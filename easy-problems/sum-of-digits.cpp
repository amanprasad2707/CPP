// calculate the sum of digits of the number
#include <iostream>
using namespace std;

int sumOfDigits(int num){
int sum = 0;
while(num > 0){
  int lastDigit = num % 10;
  sum += lastDigit;
  num /= 10;
}
return sum;
}
int main(){
  cout << sumOfDigits(321) << endl;
}