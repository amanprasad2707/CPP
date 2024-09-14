/*

A
B B
C C C
D D D D
E E E E E

*/

#include<iostream>
using namespace std;
int main(){
  int num;
  cout << "Enter number: ";
  cin >> num;
  char ch = 'A';
  for (int i = 1; i <= num; i++){
    for (int j = 1; j < i+1; j++)
    {
      cout << ch << " ";
    }
    ch++;
    cout << endl;
  }
  
  return 0;
}