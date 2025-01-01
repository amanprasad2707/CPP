// #include is a preprocessor directive:-> program compile hone se pehle iostream file code me copy ho jayegi all codes will be reffer from this file
// Preprocessor directive to include the standard input-output library.
// This library provides functionalities like cin, cout, and endl.
#include <iostream>  

// Macro definition: PI is replaced with its value (3.141592653589793) wherever it appears in the code.
// This helps avoid magic numbers and improves readability.
#define PI 3.141592653589793  

// Using the standard namespace to avoid prefixing std:: before standard functions like cout.
using namespace std;  

void print(int arr[], int n, int start = 0){ // default argument
  for (int i = start; i < n; i++)
  {
    cout << arr[i] << " ";
  }

}
// Main function: Entry point of the program.
int main() {
    // Variable declaration for the radius of a circle.
    int r = 344; // r represents the radius of the circle, initialized with the value 344.

    // Calculate the area of the circle using the formula: Area = π * r * r.
    // The macro PI is used here to provide the value of π.
    double area = PI * r * r;  

    // Print the calculated area to the console.
    // The 'endl' ensures the cursor moves to the next line after printing.
    cout << "The area of the circle with radius " << r << " is: " << area << endl;

    // Return 0 indicates the program executed successfully.
    return 0;  
}
