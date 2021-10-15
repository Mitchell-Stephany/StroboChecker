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
	long number; //this is a long because the user could input long numbers
	cout << "Please enter a nonnegative integer -> ";
	cin >> number;
	if(number < 0)
	{
		cout << "You must enter a nonnegative integer.";
	}
	string numberString = to_string(number);
	int numDigits = numberString.length();

	char digitFirst = numberString.at(0); //this line grabs the first digit from the entered integer
	char digitMiddle = numberString.at((numDigits - 1) / 2); //grabs middle digit
	char digitFinal = numberString.at(numDigits -1); // grabs final digit

	if(number == 0 || number == 1 || number == 8 || number == 11 || number == 69 || number == 88 || number == 96)
	{
		cout << number << " is a strobogrammatical number." << endl;
	}
	else if(numDigits %2 != 0 && (digitMiddle != 0 || digitMiddle != 1 || digitMiddle != 8)) //written to see if the number of digits in an integer is odd
	{
		cout << "This could not work." << endl;
	}


	cout << digitFirst << endl;
	cout << digitMiddle << endl;
	cout << digitFinal << endl;

}
