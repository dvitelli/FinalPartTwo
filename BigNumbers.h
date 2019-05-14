#pragma once

#include "stdafx.h""
#include <vector>
#include <iostream>


namespace BigNumbers
{

	class MyBigNumbers
	{

	private:

		std::vector<int> bigVector;


	public:

		MyBigNumbers(std::string numbers) {

			for (int i = 0; i < numbers.length(); i++) {

				int stringInt = numbers[i] - '0';
				bigVector.push_back(stringInt);
			}

		}

		std::vector<int>& operator +(MyBigNumbers vectorTwo) {

			std::vector<int> newVector;
			int addition;
			bool tenPlus = false;

			auto it = bigVector.rbegin();
			auto itTwo = vectorTwo.bigVector.rbegin();

			if (bigVector.size() >= vectorTwo.bigVector.size()) {

				for (itTwo; itTwo != vectorTwo.bigVector.rend(); it++, itTwo++) {

					addition = *it + *itTwo;

					if (tenPlus == true) {

						addition += 1;
						tenPlus = false;
					}

					if (addition >= 10) {

						tenPlus = true;
						addition -= 10;
						newVector.insert(newVector.begin(), addition);
						addition = 0;

					}

					else {

						newVector.insert(newVector.begin(), addition);
						addition = 0;

					}


				} for (it; it != bigVector.rend(); it++) {

					addition = *it;

					if (tenPlus == true) {

						addition += 1;
						tenPlus = false;
					}

					if (addition >= 10) {

						tenPlus = true;
						addition -= 10;
						newVector.insert(newVector.begin(), addition);
						addition = 0;

					}

					else {

						newVector.insert(newVector.begin(), addition);
						addition = 0;

					}

				}

			}
			else {

				for (it; it != bigVector.rend(); it++, itTwo++) {

					addition = *it + *itTwo;

					if (tenPlus == true) {

						addition += 1;
						tenPlus = false;
					}

					if (addition >= 10) {

						tenPlus = true;
						addition -= 10;
						newVector.insert(newVector.begin(), addition);
						addition = 0;

					}

					else {

						newVector.insert(newVector.begin(), addition);
						addition = 0;

					}


				} for (itTwo; itTwo != vectorTwo.bigVector.rend(); itTwo++) {

					addition = *itTwo;

					if (tenPlus == true) {

						addition += 1;
						tenPlus = false;
					}

					if (addition >= 10) {

						tenPlus = true;
						addition -= 10;
						newVector.insert(newVector.begin(), addition);
						addition = 0;

					}
					else {

						newVector.insert(newVector.begin(), addition);
						addition = 0;

					}

				}

				if (tenPlus == true) {

					newVector.insert(newVector.begin(), 1);
				}

			}

			for (auto it = newVector.begin(); it != newVector.end(); it++) {

				std::cout << *it;

			}

			return newVector;

		}

			std::vector<int>& operator -(MyBigNumbers vectorTwo) {

				int subtraction;
				bool borrow = false;
				std::vector<int> newVector;

				auto it = bigVector.rbegin();
				auto itTwo = vectorTwo.bigVector.rbegin();

				if (bigVector.size() >= vectorTwo.bigVector.size()) {

					for (itTwo; itTwo != vectorTwo.bigVector.rend(); it++, itTwo++) {

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

							newVector.insert(newVector.begin(), subtraction);
							subtraction = 0;

						}


					} for (itTwo; itTwo != vectorTwo.bigVector.rend(); itTwo++) {

						subtraction = *itTwo;

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

							newVector.insert(newVector.begin(), subtraction);
							subtraction = 0;

						}

					}


				}

				for (auto it = newVector.begin(); it != newVector.end(); it++) {

					std::cout << *it;

				}

				return newVector;


			}
			std::vector<int>& operator *(MyBigNumbers vectorTwo) {}

			/*	std::vector<int> newVector;
				int multiplication, carry;
				bool tenPlus = false;
				int multiplicationCounter;

				auto it = bigVector.rbegin();
				auto itTwo = vectorTwo.bigVector.rbegin();

				if (bigVector.size() >= vectorTwo.bigVector.size()) {

					for (itTwo; itTwo != vectorTwo.bigVector.rend(); itTwo++) {
						for (it; it != bigVector.rend(); it++) {

							multiplication = *it * *itTwo;
							multiplication += carry;
							carry = 0;

							if (multiplication >= 10) {

								carry = multiplication / 10;
								multiplication = multiplication / (carry * 10);
								tenPlus = true;


							}
							


						}
					}

				}




			
			} */
			std::vector<int>& operator /(MyBigNumbers vectorTwo) {} 
			std::vector<int>& operator %(MyBigNumbers vectorTwo) {}
			
			
		 }; 


	}
