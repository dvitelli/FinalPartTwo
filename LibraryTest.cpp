#include "pch.h"
#include <iostream>
#include <vector>
#include "BigNumbers.h"

int main()
{

	
	std::string test = "200";
	std::string testTwo = "50";

	BigNumbers::MyBigNumbers vectorOne(test);

	std::vector<int> bigVector;
	std::vector<int> secondVector;
	std::vector<int> newVector;

	newVector = vectorOne.operator+(testTwo);
	std::cout << " ";

	newVector = vectorOne.operator-(testTwo);


	/*for (int i = 0; i < test.length(); i++) {

		int stringInt = test[i] - '0';
		bigVector.push_back(stringInt);
	}	

	for (int i = 0; i < testTwo.length(); i++) {

		int stringInt = testTwo[i] - '0';
		secondVector.push_back(stringInt);
	}

	auto it = bigVector.rbegin();
	auto itTwo = secondVector.rbegin();

	int subtraction;
	bool borrow = false;


	if (bigVector.size() >= secondVector.size()) {

		for (itTwo; itTwo != secondVector.rend(); it++, itTwo++) {

			subtraction = *it - *itTwo;

			if (borrow == true) {

				subtraction -= 1;
				borrow = false;
			}

			if (subtraction < 0) {

				borrow = true;
				subtraction = abs(subtraction);
				newVector.insert(newVector.begin(), subtraction);
				subtraction = 0;

			}

			else {
				
				subtraction = abs(subtraction);
				newVector.insert(newVector.begin(), subtraction);
				subtraction = 0;

			}


		} for (it; it != bigVector.rend(); it++) {

			subtraction = *it;

			if (borrow == true) {

				subtraction -= 1;
				borrow = false;
			}

			if (subtraction < 0) {

				borrow = true;
				subtraction = abs(subtraction);
				newVector.insert(newVector.begin(), subtraction);
				subtraction = 0;

			}

			else {

				subtraction = abs(subtraction);
				newVector.insert(newVector.begin(), subtraction);
				subtraction = 0;

			}

		}

	}
	else {

		for (it; it != bigVector.rend(); it++, itTwo++) {

			subtraction = *it - *itTwo;

			if (borrow == true) {

				subtraction -= 1;
				borrow = false;
			}

			if (subtraction < 0) {

				borrow = true;
				subtraction = abs(subtraction);
				newVector.insert(newVector.begin(), subtraction);
				subtraction = 0;

			}

			else {

				subtraction = abs(subtraction);
				newVector.insert(newVector.begin(), subtraction);
				subtraction = 0;

			}


		} for (itTwo; itTwo != secondVector.rend(); itTwo++) {

			subtraction = *itTwo;

			if (borrow == true) {

				subtraction -= 1;
				borrow = false;
			}

			if (subtraction >= 10) {

				borrow = true;
				subtraction = abs(subtraction);
				newVector.insert(newVector.begin(), subtraction);
				subtraction = 0;

			}
			else {

				subtraction = abs(subtraction);

				newVector.insert(newVector.begin(), subtraction);
				subtraction = 0;

			}

		}


	}

	for (auto it = newVector.begin(); it != newVector.end(); it++) {

		std::cout << *it;

	}

	*/



}

