#include "BAG.h"
#include <iostream>

using namespace std;

int main() {
	BAG mybag;

	for (int i = 0; i < 10; i++) {
		mybag.add(i);                   // add elements from 0 to 10 to the bag twice
		mybag.add(i);
	}


	cout << "Frequency of 0 is "   << mybag.getFreq(0) << endl;
	cout << "Frequency of 100 is " << mybag.getFreq(100) << endl;

	mybag.remove(0);

	cout << "Frequency of 0 is " << mybag.getFreq(0) << endl;

	if (mybag.find(2))
		cout << "Found 2 in the bag" << endl;
	else cout << "Didn't find 2 in the bag " << endl;

	BAG cpy(mybag);

	cout << "mybag\n" << mybag << endl;
	cout << "copy bag\n" << cpy << endl;

	system("pause");
	return 0;
}