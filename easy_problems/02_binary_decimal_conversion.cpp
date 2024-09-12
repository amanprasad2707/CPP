// convert decimal to binary
// convert binary to decimal
#include<iostream>
using namespace std;

int decimalToBinary(int num){
int ans = 0;
int pow = 1;
while(num > 0){
  int remainder = num % 2;
  num /= 2;
  ans += pow * remainder;
  pow *= 10;
}
return ans;
}

int binaryToDecimal(int num){
  int ans = 0;
  int pow = 1;
  while(num > 0){
    int remainder = num % 10;
    num /= 10;
    ans += pow * remainder;
    pow *= 2;
  }
  return ans;
}

int main(){
cout << decimalToBinary(143) <<endl;
cout << binaryToDecimal(10001111) <<endl;
}