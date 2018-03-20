#include <iostream>
using namespace std;
int main() {
	int a;
	cin >> a;

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < i; j++) cout << " ";
		for (int k = 2 * (a - i) - 1; k > 0; k--) cout << "*";
		cout << endl;
	}
	for (int i = a - 2; i >= 0; i--) {
		for (int j = i; j > 0; j--) cout << " ";
		for (int k = 2 * (a - i) - 1; k > 0; k--) cout << "*";
		cout << endl;
	}
}