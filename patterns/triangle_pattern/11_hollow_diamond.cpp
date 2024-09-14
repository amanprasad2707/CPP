/*
    *
   * *
  *   *
 *     *
*       *
 *     *
  *   *
   * *
    *
*/
#include<iostream>
using namespace std;
int main(){
int n = 5;
// top part
for (int i = 0; i < n; i++){
  // outer spaces
  for (int j = 0; j < n-i-1; j++){
    cout << " ";
  }
  // for left star
  cout << "*";
  // inner spaces
  if(i!=0){
    for (int j = 0; j < (2*i)-1; j++){
      cout << " ";
    }
    // for right star
    cout << "*";
}
cout << endl;
}
// bottom left star
for (int i = 0; i < n-1; i++){
  // spaces
      for (int j = 0; j < i+1; j++){
        cout << " ";
      }
      cout << "*";
      if(i!= n-2){
        // spaces
        for (int j = 0; j < 2*(n-i)-5; j++)  // 2*(n-2-i)-1
      {
        cout << " ";
      }
      // bottom right star
      cout << "*";
      }
      cout << endl;
    }
}