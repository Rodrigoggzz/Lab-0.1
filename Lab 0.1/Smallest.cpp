#include<iostream>
using namespace std;
int main() {
	int a, b, c, d, small;
	char again = 'Y';
	while (again == 'Y') {
		cout << "Enter 4 numbers:";
		cin >> a >> b >> c >> d;
		int small = a;
		if (b < small) {
			small = b;
		}
		if (c < small) {
			small = c;
		}
		if (d < small) {
			small = d;
		}
		cout << "The smallest number is:" << small;
		cout << "again?";
		cin >> again;
	}
	return 0;
}