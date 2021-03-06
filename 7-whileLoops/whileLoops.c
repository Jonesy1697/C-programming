﻿/* C tutorials followed from:
	http://www.learn-c.org/
	Lesson 7

A program to determine if a number should be printed, if below 5 then do not, and if greater than 10 break the loop.
*/

#include <stdio.h>

int main() {
	int array[] = { 1, 7, 4, 5, 9, 3, 5, 11, 6, 3, 4 };
	int i = 0;

	while (i < 10) {
		if (array[i] < 5) {
			i++;
			continue;	//Continue the loop from the beginning, with the next piece of data
		}
		if (array[i] > 10) {
			break;	//Stop the loop and go to the next line of code after the while loop
		}
		
		printf("%d\n", array[i]);
 
		i++;
	}

	return 0;
}
