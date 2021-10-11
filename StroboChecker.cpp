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
		int i = 0;
		int number;
		string intString;

		cout << "Enter a nonnegative integer -> ";
		cin >> number;

		if(number < 0)
		{
			cout << "You must enter a nonnegative integer.";
		}
		else if(number == 0 || number == 1 || number == 8)
		{
			cout << number << " is a strobogrammatical number." << endl;
		}

		intString = to_string(number);
		char digit = intString.at(i);
		int numDigits = intString.length();
		cout << "The number of digits is " << numDigits << "." << endl;
		cout << "The first digit is " << digit << "." << endl;

		intString[0] = 0;
		intString[1] = 1;
		intString[6] = 9;
		intString[8] = 8;
		intString[9] = 6;

		for (int i = 0; i < numDigits / 2; i++)
		{
			int left = intString.at(i);
			int right = (digit - 1 - i);

			if(left != right)
			{
				cout << "Error.";
			}
		}
	}










