#include<iostream>
using namespace std;

void reverseWord(string &str, int start, int end){
  while(start < end){
    swap(str[start++], str[end--]);
  }
}
void reverseWordInString(string &str){
  int start = 0;
  int n = str.length();
  for (int end = 0; end < n; end++)
  {
    if(str[end] == ' '){
      reverseWord(str, start, end-1);
    start = end + 1;
    }
    else if(end == n-1){
      reverseWord(str, start, n-1);
    }
  }
  reverseWord(str, 0, n-1);
}
int main(){
string str;
getline(cin, str);
reverseWordInString(str);
cout << str;
return 0;
}