#include<iostream>
#include<queue>
using namespace std;
class heap{
  public:
    int arr[100];
    int size;

    heap(){
      arr[0] = -1;
      size = 0;
    }
    void insert(int val){  // TC -> O(logn)
      size = size + 1;
      int index = size;
      arr[index] = val;

      while(index > 1){
        int parent = index / 2;
        if(arr[parent] < arr[index]){
          swap(arr[parent], arr[index]);
          index = parent;
        }
        else{
          return;
        }
      }
    }

    void print(){
      for(int i = 1; i<=size; i++){
        cout << arr[i] << " ";
      }
      cout << endl;
    }

    void deleteFromHeap(){  // TC-> O(logn)
      if(size == 0){
        cout << "nothing to delete" << endl;
        return;
      }
      // step 1: put last element into fisrt index
      arr[1] = arr[size];
      // step 2: remove last element
      size--;
      // step 3: take root node to its correct position
      int i = 1;
      while(i < size){
        int leftIndex = 2 * i;
        int rightIndex = 2 * i + 1;

        if(leftIndex < size && arr[i] < arr[leftIndex]){
          swap(arr[i], arr[leftIndex]);
          i = leftIndex;
        }
          else if ( rightIndex < size && arr[i] < arr[rightIndex]){
          swap(arr[i], arr[rightIndex]);
          i = rightIndex;
        }
        else{
          return;
        }
      }
    }
};

void heapify(int arr[], int n, int i){  // TC -> O(n)
  int largest = i;
  int left = 2*i;
  int right = 2*i+1;
  if(left <= n && arr[largest] < arr[left]){
    largest = left;
  }
  if(right <= n && arr[largest] < arr[right]){
    largest = right;
  }
  if(largest != i){
    swap(arr[largest], arr[i]);
    heapify(arr, n, largest);
  }
}
void heapSort(int arr[], int n){  // TC -> O(nlogn)
  int t = n;
  while(t > 1){
    // step 1: swap
    swap(arr[t], arr[1]);
    // step 2
    t--;
    // step 3
    heapify(arr, t, 1);
  }
}
int main(){
  heap h;
  h.insert(50);
  h.insert(55);
  h.insert(53);
  h.insert(52);
  h.insert(54);
  h.print();
  h.deleteFromHeap();
  h.print();
  int arr[6] = {-1,54,53,55,52,50};
  int n = 5;
  for(int i = n/2; i>0; i--){
    heapify(arr, n, i);
  }
  cout << "heapify output: \n";
  for(int i = 1; i<=n; i++){
    cout << arr[i] << " ";
  } 
  cout << endl;
  heapSort(arr, n);
  cout << "sorted heap: \n";
  for(int i = 1; i<=n; i++){
    cout << arr[i] << " ";
  } 

  cout << "\n\n\nusing priority queue here: \n";
  // priority_queue<int> pq;  // max heap
  priority_queue<int, vector<int>, greater<int>> pq;  // min heap
  pq.push(1);
  pq.push(4);
  pq.push(2);
  pq.push(5);
  pq.push(3);
  cout << pq.top();
return 0;
}