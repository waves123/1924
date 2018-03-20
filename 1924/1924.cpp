#include <iostream>
#include <string>
using namespace std;

int main() {
	int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	string day[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
	int x = 0, y = 0;

	cin >> x >> y;

	for (int i = 0; i < x - 1; i++) {
		y += month[i];
	}
	
	cout << day[y%7] << endl;
}