#include <iostream>
using namespace std;
// pointers: special variable that store address of other variables
void changeA(int *a){ // pass by reference using pointer
  *a = 22;
}
void changeA_alias(int &b){ // pass by reference using alias
  b = 44;
}
int main(){
  int a = 12;
  int* ptr = &a; // & address of operator
  changeA(&a); // call by reference
  changeA_alias(a);
  int** ptr2 = &ptr;
  int** nullPtr  = NULL;
  // cout << *&a << endl;
  cout << ptr << endl;
  cout << ptr2 << endl;
  cout << **ptr2 << endl;  // * or ** is the dereferencing operator (value at address)
  cout << nullPtr << endl;
  
  // arr is a const pointer
  return 0;
}
