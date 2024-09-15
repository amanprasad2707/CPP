#include<iostream>
using namespace std;
bool isEven(int n){
  if(n % 2){
    return false;  // return false if the number is odd
  }
  else{
    return true;  // return true if the number is even
  }
}
int main(){
int num;
cout << "Enter number: ";
cin >> num;
if(num & 1){
  cout << "Number is odd." << endl;
}
else{
  cout<< "Number is even" << endl;
}
cout << isEven(num) << endl;
return 0;
}
