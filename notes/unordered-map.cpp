#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    // Create an unordered map
    unordered_map<string, int> umap;

    // Insert key-value pairs
    umap["apple"] = 1;
    umap["banana"] = 2;
    umap["cherry"] = 3;

    // Element to find
    string key = "banana";

    // Find the element
    auto it = umap.find(key);
    if (it != umap.end()) {
        cout << "Found: " << it->first << " -> " << it->second << endl;
    } else {
        cout << "Element not found!" << endl;
    }

    return 0;
}
