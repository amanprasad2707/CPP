/*
* * * * * *
*         *
*         *
* * * * * *
*         *
*         *
 */

#include <iostream>
using namespace std;
int main(){
  int num = 0;
  cout << "Enter number: ";
  cin >> num;
  for (int i = 0; i < num; i++){
    for (int j = 0; j < num; j++){
      if (i == 0 || i == num / 2 || j == 0 || j == num - 1){
        cout << "* ";
      }
      else{
        cout << "  ";
      }
    }
    cout << "\n";
  }
  return 0;
}
