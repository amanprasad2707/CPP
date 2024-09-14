/*
  1 1 1 1 1 1 1 1 1
    2 2 2 2 2 2 2 2
      3 3 3 3 3 3 3
        4 4 4 4 4 4
          5 5 5 5 5
            6 6 6 6
              7 7 7
                8 8
                  9

*/
/*
#include <iostream>
using namespace std;
int main(){
  int num;
  cout << "Enter number: ";
  cin >> num;
  for (int i = 1; i <= num; i++){
    for (int j = 0; j <= num; j++){
      if(i > j){
        cout << "  ";
      }
      else{
        cout << i << " ";
      }
    }
    cout << endl;
  }
}
*/

#include<iostream>
using namespace std;
int main(){
  int num;
  cout << "Enter number: ";
  cin >> num;
  for (int i = 0; i < num; i++){
    // spaces
    for (int j = 0; j < i; j++){
      cout << "  ";
    }
    // nums
    for (int j = 0; j < num-i; j++){
      cout << i+1 << " ";
    }
  cout << endl;
  }
  
}