﻿/* C tutorials followed from:
	http://www.learn-c.org/
	Lesson 8
	
A program with an additional function to determine if a number is greater than 10.
*/

#include <stdio.h>

/* function declaration */
void print_big(int number) {

	if (number > 10) {

		printf("%d is big\n", number);

	}

}

int main() {
	int array[] = { 1, 11, 2, 22, 3, 33 };
	int i;
	for (i = 0; i < 6; i++) {
		print_big(array[i]);
	}
	return 0;
}
