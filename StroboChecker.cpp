/**
* This program will determine if a number is strobogrammatic which is a number that is viewed the same upside down as it is right side up. <br>
* @author Mitchell Stephany
* <pre>
* DATE: October 17, 2021
* File: StroboChecker.cpp
* Course: csc1253 Section 3 <br>
* Programming Project #: 2 <br
* Instructor: Dr. Duncan
* </pre>
*/

#include <iostream>
using namespace std;
long revNum(long num)
{
	int remainder, reversedNumber;
	while(num != 0)
	{
        remainder = num % 10;
        reversedNumber = reversedNumber*10 + remainder;
        num /= 10;
    }
	return reversedNumber;
}
int main()
{
	long number;
	cout << "Please enter a nonnegative integer -> ";
	cin >> number;
	long reverseNum = revNum(number);
	string numStr = to_string(number);
	int numDigits = numStr.length();
	char midDig = numStr.at(numDigits / 2);
	string rNumberString = to_string(reverseNum);
	if(number < 0)
	{
		cout << "Error: You must enter a nonnegative integer." << endl;
	}
	else if(number < 10)
	{
		if(number == 0 || number == 1 || number == 8)
		{
			cout << number << " is a strobogrammatical number." << endl;
		}
		else
			cout << number << " is not a strobogrammatical number." << endl;
	}
	else if(numDigits % 2 == 1 && !(midDig == '0' || midDig == '1' || midDig == '8'))
	{
		cout << number << " is not a strobogrammatical number." << endl;
	}
	else
	{
		for(int i = 0; i < numDigits / 2; i++)
		{
			cout << numStr.at(i) << " <-> " << rNumberString.at(i) << endl;
			if(!((numStr.at(i) == rNumberString.at(i)) || (numStr.at(i) == '6' && rNumberString.at(i) == '9') || (numStr.at(i) == '9' && rNumberString.at(i) == '6')) || (numStr.at(i) == '6' && rNumberString.at(i) == '6'))
			{
				if((numStr.at(i) == '2' || numStr.at(i) == '4' || numStr.at(i) == '5' || numStr.at(i) == '6' || numStr.at(i) == '7') || numStr.at(i) == '9' || !(midDig == '0' || midDig == '1' || midDig == '8'))
				{
					cout << number << " is not a strobogrammatical number.";
					return 0;
				}
				cout << number << " is not a strobogrammatical number.";
				return 0;
			}
		}
		cout << number << " is a strobogrammatical number." << endl;
	}
	return 0;
}

