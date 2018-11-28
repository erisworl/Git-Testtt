// Erik Worley
// Hello World
#include <iostream>
using namespace std;

void Sum(int);
void Product(int);

int main() {
	int n;

	cout << "Enter a number for n:";
	cin >> n;

	Sum(n);
	Product(n);

	cin.ignore();
	cin.get();
	return 0;
}

void Sum(int n) {
	int sum = 0;
	for (int i = 0; i <= n; i++) {
		sum += i;
	}
	cout << "The sum is " << sum << "." << endl;
}

void Product(int n) {
	int product = 1;
	for (int i = 1; i <= n; i++) {
		product *= i;
	}
	cout << "The product is " << product << "." << endl;
}