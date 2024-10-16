#include <iostream>
using namespace std;

int main()
{
	int n = 5;

	int spaces = 2 * n - 1;
	int stars = 0;
  char ch = 'A';

	for (int i = 1; i <= 2 * n - 1; i++) {
		if (i <= n) {
			spaces = spaces - 2;
			stars++;
		}
		else {
			spaces = spaces + 2;
			stars--;
		}
		
		for (int j = 1; j <= stars; j++) {
			cout << ch;
      ch++;
		}
	
		for (int j = 1; j <= spaces; j++) {
			cout << " ";
		}
		
		for (int j = 1; j <= stars; j++) {
			if (j != n) {
				cout << ch;
        // ch++;
			}
		}
		cout << "\n";
	}
	return 0;
}
