#include<iostream>
using namespace std;
int  reverseDigit(int num){
	int reversedDigit = 0;
	while(num != 0){
		int remainder = num % 10;
		reversedDigit =(reversedDigit * 10)+ remainder;
		num /= 10;
	}
	return reversedDigit;
}
int main(){
	int num;
	cout << "Enter digit to reverse: ";
	cin >> num;
	int reversedNum = reverseDigit(num);
	cout <<reversedNum << endl;
}
