/* https://www.naukri.com/code360/problems/painter-s-partition-problem_1089557?source=youtube&campaign=LoveBabbar_Codestudiovideo1&count=25&page=1&search=painter&sort_entity=order&sort_order=ASC&leftPanelTabValue=SUBMISSION&customSource=studio_nav */

#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int>&arr, int n, int m, int maxAllowedTime){
  int painters = 1, time = 0;
  for (int i = 0; i < n; i++){
    if (arr[i] + time <= maxAllowedTime)
    {
      time += arr[i];
    }
    else{
      painters++;
      time = arr[i];
    }
  }
  return painters <= m ? true : false;
}

int minTimeToPaint(vector<int> &arr, int n, int m){
  int minTime = INT8_MIN, sum = 0, ans = -1;
  for (int i = 0; i < n; i++)
  {
    minTime = max(minTime, arr[i]);
    sum += arr[i];
  }
  int start = minTime, end = sum;

  while (start <= end)
  {
    int mid = start + (end - start) / 2;
    if (isPossible(arr, n, m, mid))
    {
      ans = mid;
      end = mid - 1;
    }
    else
    {
      start = mid + 1;
    }
  }
  return ans;
}

int main()
{
  vector<int> arr = {10,20,30,40};
  int n = 4, m = 2;
  cout << minTimeToPaint(arr, n, m) << endl;
  return 0;
}