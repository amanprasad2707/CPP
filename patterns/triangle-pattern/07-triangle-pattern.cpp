/*
1 1 1 1
  2 2 2
    3 3
      4

1 1 1 1 1
2 2 2 2
3 3 3
4 4
5
*/

#include <iostream>
using namespace std;
int main(){
  int num;
  cout << "Enter number: ";
  cin >> num;
  for (int i = 1; i <= num; i++){
    for (int j = 0; j < num; j++){
      if(i > j){
        cout << "";
      }
      else{
        cout << i << " ";
      }
    }
    cout << endl;
  }
}