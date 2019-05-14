// GTTests.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <gtest/gtest.h>
#include "BigNumbers.h"

TEST(GTTests, CanMakeBigVector) {

	std::string test = "200";
	std::string testTwo = "50";

	BigNumbers::MyBigNumbers vectorOne(test);

} 

TEST(BigNumbersTest, CanUseAdditionOperator) {

	std::string test = "200";
	std::string testTwo = "50";
	std::vector<int> newVector;

	BigNumbers::MyBigNumbers vectorOne(test);

	newVector = vectorOne.operator+(testTwo);


} TEST(BigNumbersTest, CanUseSubtractionOperator) {

	std::string test = "200";
	std::string testTwo = "50";
	std::vector<int> newVector;

	BigNumbers::MyBigNumbers vectorOne(test);

	newVector = vectorOne.operator-(testTwo);


} TEST(BigNumbersTest, CanUseMultiplicationOperator) {

	std::string test = "200";
	std::string testTwo = "50";
	std::vector<int> newVector;

	BigNumbers::MyBigNumbers vectorOne(test);

	newVector = vectorOne.operator*(testTwo);


} TEST(BigNumbersTest, CanUseDivisionOperator) {

	std::string test = "200";
	std::string testTwo = "50";
	std::vector<int> newVector;

	BigNumbers::MyBigNumbers vectorOne(test);

	newVector = vectorOne.operator/(testTwo);

} TEST(BigNumbersTest, CanUseModOperator) {

	std::string test = "200";
	std::string testTwo = "50";
	std::vector<int> newVector;

	BigNumbers::MyBigNumbers vectorOne(test);

	newVector = vectorOne.operator%(testTwo);
}

