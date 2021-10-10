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
#include <sstream>
using namespace std;

int main()
{
	long number;
	int digCount = 0;
	int reversedNumber = 0;

	cout<< "Please enter a number -> ";
	cin>> number;

	if(number < 0)
	{
		cout<< "You must enter a nonnegative integer.";
	}
	else
	{
	while(number > 0)
	{
		number /= 10;
		digCount++;
	}
	}
	cout<< "The number contains " << digCount << " digits. ";



	if(digCount % 2 == 0)
	{
		cout << "The number is not a strobogrammatical number.";
	}
	else
	{
		cout << "The number could be a strobogrammatical number";
	}
	while (number % 2 != 0)
		{
			reversedNumber *= 10;
			int digLast = number % 10;
			reversedNumber += digLast;
			number /= 10;
			}

		cout<<" Reversed number is: " << reversedNumber;
	return 0;
	}










