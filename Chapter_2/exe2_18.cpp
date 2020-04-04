#include <iostream>

int main() {
	int obj = 1, val = 2;
	int *p = &obj;
	*p = 3;
	std::cout << obj << std::endl;
	p = &val;
	std::cout << *p << std::endl;
	
	return 0;
}