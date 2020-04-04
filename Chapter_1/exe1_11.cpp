#include <iostream>

using namespace std;

int main() {
	int small = 0, big = 0;
	cout << "Please enter two integers: ";
	cin >> small >> big;
	
	if (small > big) {
		int temp = small;
		small = big;
		big = temp;
	}
	
	while (small <= big) {
		cout << small << " ";
		++small;
	}
	cout << endl;
	return 0;
}