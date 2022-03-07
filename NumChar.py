#!/usr/bin/python3
"""Basic program to count the number of characters in a string
"""
myString = input("Enter a string: ")
while len(myString) > 0:
	count = 1 #	A character is found
	output = myString[0] # We add it to our comparison variable
	myString = myString[1:] # We remove it from the string
	for i in range(len(myString)):
		if output == myString[i]: # If we find a match, we add 1 to our count
			count += 1
	myString = myString.replace(output, "") # We remove the character from the string
	print (output + ": ", count) # We print the character and its count
