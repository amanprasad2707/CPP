// program to return the number of set bits in number
#include<iostream>
using namespace std;
int main(){
int num;
int count = 0;
cout<< "Enter number: ";
cin >> num;
while(num>0){
  if(num & 1){  // Check if the least significant bit is 1
count++;
  }
num >>= 1;
}
cout<< "Number of set bits: " << count << endl;
return 0;
}