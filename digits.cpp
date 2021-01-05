#include <iostream>
using namespace std;

int main() {
	double x;
	do {
		cout << "\n\nx: ";
		cin >> x;
		cout << "\nnumber is " << x;
		cout << "\n\nafter " << 5 - x << " tries program terminates";
	} while (x < 5);
}
