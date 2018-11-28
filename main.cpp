// Erik Worley
// Hello World
#include <iostream>
using namespace std;

void Sum(int);

int main() {
	int n;
	int sum;

	cout << "Enter a number for n:";
	cin >> n;

	Sum(n);

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