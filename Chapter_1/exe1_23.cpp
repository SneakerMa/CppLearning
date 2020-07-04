#include <iostream>
#include "Sales_item.h"

using namespace std;

int main() {
	Sales_item curItem, item;
	if (cin >> curItem) {
		int cnt = 1;
		while (cin >> item) {
			if (curItem.isbn() == item.isbn())
				++cnt;
			else {
				cout << curItem << " occurs " << cnt << " times." << endl;
				curItem = item;
				cnt = 1;
			}
		}
		cout << curItem << " occurs " << cnt << " times." << endl;
	}
	return 0;
}