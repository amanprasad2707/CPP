#include <iostream>
#include <vector>
using namespace std;

// time complexity: best case (already sorted)-> O(n) worst case -> O(n)
// space complexity: O(1)
void insertionSort(vector<int> &arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int current = arr[i];
        int prev = i - 1;

        // Move elements greater than 'current' one position ahead
        while (prev >= 0 && arr[prev] > current) {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = current; // Place 'current' in its correct position
    }
}
void printArray(const vector<int> &arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {8, 5, 2, 9, 5, 6, 3};
    
    cout << "Original array: ";
    printArray(arr);

    insertionSort(arr);
    
    cout << "Sorted array: ";
    printArray(arr);

    return 0;
}