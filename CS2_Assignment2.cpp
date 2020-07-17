//============================================================================
// Name        : Chapter8ProgrammingAssignment.cpp
// Description : Sorting & Searching functions
// Author      : Cameron Roberts
// Extra Credit: No.
// Date		   : 02/03/2017
// OS		   : Windows
// IDE		   : Eclipse Neon
//============================================================================
#include "utilities.hpp"
using namespace std;



int main() {

	vector<int> randomInts;

	for(int i = 0; i < 10; i++){
		randomInts.push_back (getRandomInt(0, 11));
	}

	bubbleSort(randomInts, 'd');

	for(int i = 0; i < 10; i++){
		cout << randomInts[i];
	}
	cout << "   bubbleSort Descending" << endl;

	bubbleSort(randomInts, 'a');

	for (int i = 0; i < 10; i++) {
		cout << randomInts[i];
	}
	cout << "   bubbleSort Ascending" << endl;

	selectionSort(randomInts, 'd');

	for (int i = 0; i < 10; i++) {
		cout << randomInts[i];
	}
	cout << "   selectionSort Descending" << endl;

	selectionSort(randomInts, 'a');

	for (int i = 0; i < 10; i++) {
		cout << randomInts[i];
	}
	cout << "   selectionSort Ascending" << endl;

	int userChoice;


	do{
		int userChoice = inputInt("Linear Search(0) or Binary Search(1)?(-1 to exit)", 0, 1, -1);
			if(userChoice == -1){
				break;
			}
			else if(userChoice == 0){
				int searchValue = inputInt("Choose a value 0-10: ", 0, 10, -1);
				bool foundLinear = linearSearch(randomInts, searchValue);
				if(foundLinear == true){
					cout << "Value is present." << endl;
				}
				else if (searchValue == -1){
					break;
				}
				else{
					cout << "Value is not present." << endl;
				}
			}
			else if(userChoice == 1) {
				int searchValue = inputInt("Choose a value 0-10: ", 0, 10, -1);
				bool foundBinary = intVectorBinSearch(randomInts, searchValue);
				if(foundBinary == true){
					cout << "Value is present." << endl;
				}
				else if (searchValue == -1) {
					break;
				}
				else{
					cout << "Value is not present." << endl;
				}

			}
			else{}

	}while(true);




	cout << "Have a nice day!" << endl; // prints "Have a nice day"
	return 0;
}
