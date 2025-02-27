#include<iostream>
using namespace std;
class kQueue{
  int n,k;
  int *front;
  int *rear;
  int *next;
  int *arr;
  int freeSpot;
public:
  kQueue(int n, int k){
    this->n = n;
    this->k = k;
    front = new int[k];
    rear = new int[k];
    for (int i = 0; i < k; i++){
      front[i] = -1;
      rear[i] = -1;
    }
    next = new int[n];
    for (int i = 0; i < n; i++){
      next[i] = i+1;
    }
    next[n-1] = -1;
    
    arr = new int[n];
    freeSpot = 0;
  }
  void enqueue(int val, int qn){
    if(freeSpot == -1){
      cout << "no empty space is available\n";
      return;
    }
    // find first free index
    int index = freeSpot;

    // update freespot
    freeSpot = next[index];

    // check whether first element
    if(front[qn-1] == -1){
      front[qn-1] = index;
    }
    else{
      // link new element to the previous element
      next[rear[qn-1]] = index;
    }

    // update next
    next[index] = -1;

    // update rear
    rear[qn-1] = index;

    // push element
    arr[index] = val;

  }

  int dequeue(int qn){
    // check for underflow
    if(front[qn-1] == -1){
      cout << "underflow\n";
      return -1;
    }
    // find index to pop
    int index = front[qn-1];

    // front ko aage badhao
    front[qn-1] = next[index];

    // manage freespot
    next[index] = freeSpot;
    freeSpot = index;
    return arr[index];
  }
};
int main(){
  kQueue q(10,3);
  q.enqueue(12,1);
  q.enqueue(15,1);
  q.enqueue(20,2);
  q.enqueue(25,1);
  cout << q.dequeue(1) << endl;
  cout << q.dequeue(1) << endl;
  cout << q.dequeue(2) << endl;
  cout << q.dequeue(1) << endl;
return 0;
}