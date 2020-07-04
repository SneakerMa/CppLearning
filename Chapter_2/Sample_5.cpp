#include <iostream>

int main() {
	int i = 42;
	int *pi = 0; 	// pi is initialized but addresses no object
	int *pi2 = &i;  // pi2 initialized to hold the address of id
	int *pi3; 		// if pi3 is defined inside a block, pi3 is uninitialized
	pi3 = pi2;		// pi3 and pi2 address the same object, e.g., i
	pi2 = 0;		// pi2 now address no object
	
	double obj = 3.14, *pd = &obj;
	// ok: void* can hold the address value of any data pointer type
	void *pv = &obj;// obj can be an object of any type
	pv = pd; 		// pv can hold a pointer to any type
	
	int ival = 1024;
	int *p = &ival;// pi points to an int
	int **ppi = &p;// ppi points to a pointer to an int
	std::cout << "The value of ival\n"
			  << "direct value: " << ival << "\n"
			  << "indirect value: " << *p << "\n"
			  << "doubly indiret value: " << **ppi << std::endl;
			  
	int j = 42;
	int *pp; 		// pp is a pointer to int
	int *&r = pp;	// r is a reference to the pointer pp
	r = &j;			// r refers to a pointer; assigning &i to r makes pp point to i
	*r = 0;			// dereferencing r yields i, 
					// the object to which pp points; chages i to 0
	
	return 0;
}