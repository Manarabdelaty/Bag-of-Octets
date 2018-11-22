#include "BAG.h"

std::ostream & operator<<(std::ostream & o, const BAG & mybag) {
	o << "{"; 
	for (int i = 0; i < MAX_SIZE; i++)
		if (unsigned int(mybag.bag[i]) != 0)
			for (int j=0; j < unsigned int (mybag.bag[i]) ; j++)
			                 o << i << " ";
	o << "}";
	return o;
}

BAG::BAG(){
	memset(bag, 0,sizeof(unsigned char) * MAX_SIZE);
}
BAG::BAG(const BAG & cpybag) {
	for (int i = 0; i < MAX_SIZE; i++)
		bag[i] = cpybag.bag[i];
}
void BAG::add(int num) {
	if (isOctet(num)) {
		if (unsigned int(bag[num]) == MAX_SIZE-1)
			throw("Exceeded Maximum Frequency of a number");
		else
		bag[num] ++;
	}
}
void BAG::remove(int num) {
	if (isOctet(num)) {
		if (unsigned int(bag[num]) == 0)
			throw("Trying to remove an element that isn't in the bag");
		else bag[num]--;
	}
}
bool BAG::find(int num) const {
	if (isOctet(num)) {
		return(unsigned int(bag[num]) > 0);
	}
}
int BAG::getFreq(int num) const {
	if (isOctet(num))
		return(unsigned int(bag[num]));
}
