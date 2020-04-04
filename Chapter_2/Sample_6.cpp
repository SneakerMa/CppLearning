#include <iostream>

int main() {
	const int bufSize = 512; 	// input buffer size
	//bufSize = 512; 			// error: attempt to write to const object
	
	const int i = get_size(); 	// ok: initialized at run time
	const int j = 42; 			// ok: initialized at compile time
	//const int k;				// error: k is uninitialized const
	
	const int ci = i;			// ok: the value in i is copied into ci
	int cj = ci;				// ok: the value in ci is copied into cj
	
	int x = 42;
	const int &r1 = i; 			// we can bind a const int& to a plain int object
	const int &r2 = 42; 		// ok: r2 is a reference to const
	const int &r3 = r1 * 2; 	// ok: r3 is a reference to const
	//int &r4 = r1 * 2;         // error: r4 is a plain, non const reference
	
	const double pi = 3.14; 	// pi is const; its value may not be changed
	//couble *ptr = &pi;		// error: ptr is a plain pointer
	const double *cpter = &pi;  // ok: cpter may point to a double that is const
	//*ptr = 42; 				// error: cannot assign to *cptr
	
	double dval = 3.14; 		// dval is a double; its value can be changed
	cptr = &dval;				// ok: but can't change dval through cptr
	
	int errNumb = 0;
	int *const curErr = &errNumb; // curErr will a;ways point to errNumb
	const double *const pip = &pi;// pip is a const pointer to a const object
	
	const int max_files = 20; 	// max_files is a constant expression
	const int limit = max_files + 1; // limit is a constant expression
	int staff_size = 27; 		// staff_size is not a constant expression
	const int sz = get_size() 	// sz is not a constant expression
	
	return 0
}