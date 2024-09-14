
#include<iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter number to check if it's a power of two: ";
    cin >> num;

    if (num > 0 && (num & (num - 1)) == 0) {
        cout << num << " is a power of two";
    } else {
        cout << num << " is not a power of two";
    }

    return 0;
}
