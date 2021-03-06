﻿/* C tutorials followed from:
	http://www.learn-c.org/
	Lesson 10
	
A program to implement pointers, where the pointer will be used to increment a stored value by 1.
*/

#include <stdio.h>

// Pointers are a single integer which hold a memory address
int main()
{
	// Create a stack variable name, holding the name "John", initalizing "J" to variable name
	char * name = "John";	//Not used

	int n = 10;
	int *pointer_to_n = &n;
	
	// Add one to value in pointer
	*pointer_to_n += 1;

	/* testing code */
	if (pointer_to_n != &n) return 1;
	if (*pointer_to_n != 11) return 1;

	printf("Done!\n");
	return 0;
}

