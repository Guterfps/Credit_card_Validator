// Creadit_card_Validator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using std::cout;
using std::cin;
using std::string;

int GetDigit(const int number);
int SumOddDigits(const string cardNumber);
int SumEvenDigits(const string cardNumber);



int main()
{
	string cardNumber;
	int result = 0;

	cout << "Enter credit card number: \n";
	cin >> cardNumber;

	result = SumEvenDigits(cardNumber) + SumOddDigits(cardNumber);

	if (result % 10 == 0) {

		cout << cardNumber << " is valid \n";

	}
	else {

		cout << cardNumber << " is not valid \n";

	}

	return 0;

}

int GetDigit(const int number) {
	
	return number % 10 + (number / 10 % 10);
}

int SumOddDigits(const string cardNumber) {
	
	int sum = 0;

	for (int i = cardNumber.size() - 1 ; i >= 0 ; i -= 2) {
		sum += cardNumber[i] - '0';

	}
	return sum;
}

int SumEvenDigits(const string cardNumber){

	int sum = 0;
	
	for (int i = cardNumber.size() - 2 ; i >= 0 ; i -= 2) {
		sum += GetDigit((cardNumber[i] - '0') * 2);

	}
	return sum;
}
