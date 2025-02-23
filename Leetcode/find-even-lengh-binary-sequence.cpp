#include <iostream>
#include <vector>
using namespace std;

void generateSequences(int n, int pos, int sum1, int sum2, string &sequence) {
    // Base case: If we have filled all positions
    if (pos == 2 * n) {  
        if (sum1 == sum2)  // If valid, print the sequence
            cout << sequence << " ";
        return;
    }

    // Early exit: If sum1 or sum2 exceeds the allowed sum, stop further recursion
    if (sum1 > n || sum2 > n) return;

    // Try '0' at position pos
    sequence[pos] = '0';
    generateSequences(n, pos + 1, sum1, sum2, sequence);

    // Try '1' at position pos
    sequence[pos] = '1';
    if (pos < n)  
        generateSequences(n, pos + 1, sum1 + 1, sum2, sequence);  // First half: update sum1
    else  
        generateSequences(n, pos + 1, sum1, sum2 + 1, sequence);  // Second half: update sum2
}

void findBinarySequences(int n) {
    string sequence(2 * n, '0');  // Initialize sequence with all '0's
    generateSequences(n, 0, 0, 0, sequence);
    cout << endl;
}

int main() {
    int n = 2; // Change this to any value of N
    findBinarySequences(n);
    return 0;
}
