#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	string myString = ""; // string to hold the input
	char output = '\0'; // char to hold the current character
	int count = 0; // count of current character
	cout << "Enter a string: ";
	cin >> myString;
	while (myString.length() > 0) // while the string is not empty
	{
		count = 1; // The is atleast one of the current character
		output = myString[0]; // get the first character
		myString = myString.substr(1); // remove it since we already have it
		int pos = 0;
		while (pos < myString.length())
		{
			char character = myString[pos]; // get the character to compare
			if (output == character) // if the current character is the same as the one we are comparing to
			{
				count++; // increment the count
				myString.replace(pos, 1, ""); // remove it from the string
				// We've removed the character, so we don't increment the position
				// since the next character will be at the same position
			}
			else
			{
				pos++; // if the character is not the same, we go to the next position
			}
		}
		cout << output << ": " << count << endl;
	}
	return 0;
}
