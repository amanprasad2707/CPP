#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;

class Solution{
public:
  string reverseWords(string s){
    // Step 1: Trim leading and trailing spaces and reduce multiple spaces to one
    stringstream ss(s);
    string word, result;

  /*  if (ss >> word){
      cout << "First word extracted: " << word << endl;
    }
    else{
      cout << "No word could be extracted from the stream." << endl;
    } */

    while (ss >> word){
      // Add each word to the front of the result string to reverse the order
      if (!result.empty()){
        result = word + " " + result;
        cout << "result: " << result << "    " << "word: "  << word << endl;
      }
      else{
        result = word;
        cout << "result in else: " << result << endl;
      }
    }
    return result;
  }
};

int main(){
  Solution solution;
  string s;

  // Test Case 1
  s = " i like this program very much ";
  cout << "output: " << solution.reverseWords(s) << "" << endl; // Output: "much very program this like i"

  return 0;
}
