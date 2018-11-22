#ifndef  BAG_H
#define BAG_H

#define MAX_SIZE 256

#include<string.h>
#include <iostream>

class BAG {
	unsigned char bag[MAX_SIZE];                     // Frequency array 
	bool isOctet(int num) const { if (num >= 0 && num < MAX_SIZE) return true; 
	                        else throw("Number must be an octet");}             // Validates number to add/remove/find
	friend std::ostream & operator << (std::ostream & o, const BAG &  );       // Overload output operator
public:

	BAG();                   // Default constructor
	~BAG() {};              // Destructor
	BAG(const BAG &);      // Copy constructor

	void add(int);              // Add element to the bag
	void remove(int);          // remove element from the bag
	bool find(int) const;     // check whether an element is in the bag or not
	int getFreq(int) const;  // returns the number of occurences of an element in the bag

};
#endif // ! BAG_H
