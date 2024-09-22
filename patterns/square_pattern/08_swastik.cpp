#include <iostream>
using namespace std;

void swastik(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      // For the top half
      if (i < n / 2)
      {
        if (j == 0 || j == n / 2)
        {
          cout << "* "; // Left and center vertical lines
        }
        else if (i == 0 && j > n / 2)
        {
          cout << "* "; // Top right horizontal line
        }
        else
        {
          cout << "  "; // Spaces
        }
      }
      // For the middle row
      else if (i == n / 2)
      {
        cout << "* "; // Full horizontal line in the middle
      }
      // For the bottom half
      else
      {
        if (j == n / 2 || j == n - 1)
        {
          cout << "* "; // Right and center vertical lines
        }
        else if (i == n - 1 && j < n / 2)
        {
          cout << "* "; // Bottom left horizontal line
        }
        else
        {
          cout << "  "; // Spaces
        }
      }
    }
    cout << endl; // Move to the next line after each row
  }
}

int main()
{
  int n;
  cout << "Enter an odd number: ";
  cin >> n;

  if (n % 2 == 0)
  {
    cout << "Please enter an odd number for the pattern to work properly." << endl;
  }
  else
  {
    swastik(n);
  }

  return 0;
}
