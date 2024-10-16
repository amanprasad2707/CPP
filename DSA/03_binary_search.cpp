#include <iostream>
#include <vector>
using namespace std;
/*
time complexity of binary search is O(log n)
Iterative approach is better than recursive because in case of iteration the space complexity of O(1) and in case of recursion the space complexity is O(log n)
 */
int binarySearchIterative(vector<int> vec, int target){
  int start = 0, end = vec.size() - 1;
  while (start <= end){
    // int mid = (start + end) / 2;
    int mid = start + (end - start) / 2;
    if (vec[mid] < target){
      start = mid + 1;
    }
    else if (vec[mid] > target){
      end = mid - 1;
    }
    else{
      return mid;
    }
  }
  return -1;
}

int binarySearchRecursive(vector<int> vec, int target, int start, int end){
  if(start > end){
  return -1;
  }
  int mid = start + (end - start) / 2;
  if (vec[mid] < target){
    return binarySearchRecursive(vec, target, mid + 1, end);
  }
  else if (vec[mid] > target){
    return binarySearchRecursive(vec, target, start, mid - 1);
  }
  else{
    return mid;
  }
  return -1;
}
int main()
{
  vector<int> vec = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 18,22,54,67,88,91, 95,98};
  int size = vec.size();
  int target = 5;
  cout << binarySearchIterative(vec, target) << endl;
  cout << binarySearchRecursive(vec, target, 0, size-1) << endl;
  return 0;
}
