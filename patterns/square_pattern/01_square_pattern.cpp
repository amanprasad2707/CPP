/*
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
*/

#include <iostream>
using namespace std;
int main(){
  int num = 0;
  cout << "Enter number: ";
  cin >> num;
  for (int i = 0; i < num; i++){
    for (int j = 1; j <= num; j++){
      cout << j << " ";
    }
    cout << "\n";
  }
  return 0;
}

