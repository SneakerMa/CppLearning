#include <iostream>

using namespace std;

int main() {
	// exe1.9
	int sum = 0;
	for (int val = 50; val <= 100; ++val)
		sum += val;
	cout << "The sum from 50 to 100 inclusive is " << sum << endl;
	
	// exe1.10
	for (int val = 10; val >= 0; --val)
		cout << val << " ";
	cout << endl;
	
	// exe1.11
	int small = 0, big = 0;
	cout << "Please enter two integers: ";
	cin >> small >> big;
	
	if (small > big) {
		int temp = small;
		small = big;
		big = temp;
	}
	
	for (; small <= big; ++small)
		cout << small << " ";
	cout << endl;
	
	return 0;
}