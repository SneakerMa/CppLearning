#include <iostream>

int main() {
	int ival = 1024;
	int &refVal = ival; 	// refVal refers to (is another name for) ival
	//int &refVal2; 		// error: a reference must be initialized
	
	refVal = 2; 	// assigns 2 to the object to which refVal refers, i.e., to ival
	int ii = refVal; // same as ii = ival
	
	// ok: refVal3 is bound to the object to which refVal is bound, i.e., to value_comp
	int &refVal3 = refVal;
	// initializes i from the value in the object to which refVal is bound
	int i = refVal; // ok: initializes i to the same value as ival
	
	int &refVal4 = 10; // error: initializer must be an object
	double dval = 3.14;
	int &refVal5 = dval; // error: initializer must be an int object
	
	return 0;
}