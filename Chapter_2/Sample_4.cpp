#include <iostream>
#include <cstdlib>

int main() {
	int *ip1, *ip2; 	// both ip1 and ip2 are pointers to int
	double dp, *dp2; 	// dp2 is a pointer to double; dp is a double
	
	int ival = 42;
	int *p = &ival; 	// p holds the address of ival; p is a pointer to ival
	std::cout << *p << std::endl; // * yields the object to which p points; prints 42
	*p = 0;				// we assign a new value to ival through p
	std::cout << *p << std::endl; // prints 0
	
	double dval;
	double *pd = &dval; // ok: initializer is the address of a double
	double *pd2 = pd;   // ok: initializer is a pointer to double
	
	//int *pi = pd; 	// error: types of pi and pd differ
	//pi = &dval; 		// error: assigning the address of a double to a pointer to int
	
	int *p1 = nullptr; 	// equivalent to int *p1 = 0;
	int *p2 = 0;		// directly initializes p2 from the literal constant 0
	// must #include cstdlib
	int *p3 = NULL; 	// equivalent to int *p3 = 0;
	
	int zero = 0;
	pi = zero; 			// error: cannot assign an int to a pointer
	
	return 0;
}