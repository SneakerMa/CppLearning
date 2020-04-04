#include <iostream>

using namespace std;

int main() {
	bool b = 42; 	// b is true
	int i = b; 		// i has value 1
	i = 3.14; 		// i has value 3
	double pi = i;  // pi has value 3.0
	unsigned char c = -1; // assuming 8-bit chars, c has value 255. -1 mod 256
	signed char c2 = 256; // assuming 8-bit chars, the value of c2 is undefined
	
	unsigned u = 10;
	int j = -42;
	cout << j + j << endl; 	// prints -84
	cout << u + j << endl; 	// if 32-bit ints, print 4294967264
	
	unsigned u1 = 42, u2 = 10;
	cout << u1 - u2 << endl; 	// ok: result is 32
	cout << u2 - u1 << endl; 	// ok: but the result will wrap around
	
	return 0;
}
