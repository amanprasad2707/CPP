#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
vector<int> vec = {1,2,3,4,5};
int maxSum = INT_MIN;
// for (int start = 0; start < vec.size(); start++){
//   for (int end = start; end < vec.size(); end++){
//     for (int i = start; i <= end; i++){
//       cout << vec[i];
//     }
//     cout << " ";
//   }
//   cout << endl;
// }
for (int start = 0; start < vec.size(); start++){
  int currentSum = 0;
  for (int end = start; end < vec.size(); end++){
    currentSum += vec[end];
    maxSum = max(currentSum, maxSum);
  }
}

/* int currSum = 0, maxSum = INT_MIN;
        for(int val : vec){
          currSum += val;
          maxSum = max(currSum, maxSum);
          if(currSum < 0){
            currSum = 0;
          }
        }
        return maxSum; 
 */
cout << "Maximum subarray sum: " << maxSum << endl;

return 0;
}
