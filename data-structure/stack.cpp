#include<iostream>
#include<vector>
#include<list>
using namespace std;
class Stack{
  vector<int> vec;
  public:
    void push(int val){ // O(1)
      vec.push_back(val);
    }
    void pop(){  // O(1)
      vec.pop_back();
    }
    int top(){  // O(1)
      return vec[vec.size()-1];
    }
    bool empty(){
      return vec.size() == 0;
    }
};

class StackLL{
  list<int> ll;
  public:
    void push(int val){
      ll.push_front(val);
    }
    void pop(){
      ll.pop_front();
    }
    int top(){
      return ll.front();
    }
    bool empty(){
      return ll.size() == 0;
    }
};
int main(){
  StackLL s;
  s.push(20);
  s.push(50);
  s.push(10);
  while(!s.empty()){
    cout << s.top() << " ";
    s.pop();
  }
  cout << endl;
return 0;
}