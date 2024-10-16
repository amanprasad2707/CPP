/* https://www.naukri.com/code360/problems/aggressive-cows_1082559?interviewProblemRedirection=true&search=ag&attempt_status=COMPLETED&leftPanelTabValue=SUBMISSION */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(vector<int>&arr, int n, int c, int minAllowedDistance) {
  int cows = 1, lastStallPos = arr[0];
  for (int i = 1; i < n; i++){
    if(arr[i] - lastStallPos >= minAllowedDistance){
      lastStallPos = arr[i];
      cows++;
    }
    if(cows == c){
      return true;
    }
  }
  return false;
}

int getDistance(vector<int> &arr, int n, int c){
  sort(arr.begin(), arr.end());
  int start = 1, end = arr[n - 1] - arr[0], ans = -1;
  while (start <= end)
  {
    int mid = start + (end - start) / 2;
    if(isPossible(arr, n, c, mid)){
      ans = mid;
      start = mid + 1;
    }
    else{
      end = mid - 1;
    }
  }
  return ans;
}
int main()
{
  vector<int> arr = {1, 2, 3, 8 ,4,9};
  int n = 5;
  int c = 3;
  cout << getDistance(arr, n, c) << endl;
  return 0;
}