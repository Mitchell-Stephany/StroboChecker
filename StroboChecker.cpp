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
//	int i, j; // nested for loop with if statement
	cout << "Please enter a nonnegative integer -> ";
	cin >> number;

	string numberString = to_string(number);
	int numDigits = numberString.length();
	char digitFirst = numberString.at(0); //this line grabs the first digit from the entered integer
	char digitMiddle = numberString.at((numDigits - 1) / 2); //grabs middle digit
	char digitFinal = numberString.at(numDigits - 1); // grabs final digit

//	string rnumberString = to_string(reversedNumber);
//	int rDigits = numberString.length();
//	int rFirst = numberString.at(0);
//	int rContinuous = numberString.at(0);
//	int numContinuous = numberString.at(0);

	if(number < 0)
	{
		cout << "Error: You must enter a nonnegative integer." << endl;
	}
	else if(number == 0 || number == 1 || number == 8 || number == 11 || number == 88) //single and double digit #s
	{
		cout << number << " is a strobogrammatical number." << endl;
	}
	if(numDigits %2 != 0 && (digitMiddle != 0 || digitMiddle != 1 || digitMiddle != 8)) //written to see if the number of digits in an integer is odd
	{
		cout << number << " is not a strobogrammatical number." << endl;
	}


	while(number != 0)
		{
			reversedNumber *= 10;
			reversedNumber += number % 10;
			number /= 10;
		}


//				cout << numContinuous << " <-> " << rContinuous << endl;





	cout << digitFirst << endl;
	cout << digitMiddle << endl;
	cout << digitFinal << endl;
//	cout << rDigits << endl;
//	cout << rFirst << endl;
	cout << reversedNumber << endl;
}

