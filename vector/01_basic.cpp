#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> vec = {1,2,3,4,5,6,7,8};
vector<int> test (5,1);
vec.push_back(12);
vec.push_back(12);
vec.push_back(12);
vec.push_back(12);
vec.pop_back();
vec.pop_back();
cout << vec.front() << endl;  // prints the 0th element in the vector
cout << vec.back() << endl; // prints the last element in the vector
cout << vec.at(4) << endl;   // prints the value at the index defined
cout << "size of vector: " << vec.size() << endl;
cout << "capacity of vector: " << vec.capacity() << endl;  
// for(int val: vec){
//   cout << val << endl;
// }
// cout << test.size() << endl;
return 0;
}