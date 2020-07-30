// CIT 125 Intro to C++ Luigi Robles
// Ch.11 Pg.393 Figure 11-27
// Highest number program
// Displays the highest number in an array

#include <iostream>
using namespace std;

//function prototype
int getHighest(int numArray[], int numElemnts);

int main()
{
	int numbers[4] = { 13, 2, 40, 25 }; //declare and initialize int array

	cout << "The highest number in the array is "
		<< getHighest(numbers, 4) << "." << endl; //function call
	return 0;
}	//end of main function

//*****Function Definitions*****
int getHighest(int numArray[], int numElements)
{
	//assign first element's value to the high variable
	int high = numArray[0];

	//begin search with second element
	for (int sub = 1; sub < numElements; sub += 1)
		if (numArray[sub] > high)
			high = numArray[sub];
		//end if
	//end for
	return high;
}	//end of getHighest function
