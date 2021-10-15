/**
* This program will determine if a number is a strobogrammatic number and is viewed the same upside down as it is right side up. <br>
* @author Mitchell Stephany
* <pre>
* DATE: November 8, 2021
* File: StroboChecker.cpp
* Course: csc1253 Section x <br>
* Programming Project #: 2 <br
* Instructor: Dr. Duncan
* </pre>
*/

#include <iostream>
using namespace std;
int main(){
	long number;
	int reversedNumber = 0;
	int i; // nested for loop with if statement
	cout << "Please enter a nonnegative integer -> ";
	cin >> number;

	string numberString = to_string(number);
	int numDigits = numberString.length();
	char digitFirst = numberString.at(0); //this line grabs the first digit from the entered integer
	char digitMiddle = numberString.at((numDigits - 1) / 2); //grabs middle digit
	char digitFinal = numberString.at(numDigits - 1); // grabs final digit

	string rNumberString = to_string(reversedNumber);
	int numRDigits = rNumberString.length();
	char digitRMiddle = rNumberString.at((numRDigits) / 2);

//	while(number != 0)
//	{
//		reversedNumber *= 10;
//		reversedNumber += number % 10;
//		number /= 10;
//	}

	if(number < 0)
	{
		cout << "Error: You must enter a nonnegative integer." << endl;
	}
	else if(number == 0 || number == 1 || number == 8 || number == 11 || number == 88) //single and double digit #s
	{
		cout << number << " is a strobogrammatical number." << endl;
	}
	else if(numDigits %2 != 0 && (digitMiddle != 0 || digitMiddle != 1 || digitMiddle != 8)) //written to see if the number of digits in an integer is odd
	{
		cout << number << " is not a strobogrammatical number." << endl;
	}
	else if(digitFirst == digitFinal)
	{
			for(i = 1; i <= numDigits / 2; i++)
			{
				cout << digitFirst << " <-> " << digitFinal << endl;
				cout << numberString.at(i) << " <-> " << rNumberString.at(i) << endl;

			}
	}
	else
	{
		cout << "Hello." << endl;
	}

	cout << digitRMiddle << endl;
	cout << digitMiddle << endl;
	cout << reversedNumber << endl;

	return 0;
}

