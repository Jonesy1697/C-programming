﻿/* C tutorials followed from:
	http://www.learn-c.org/
	Lesson 9

A program to calculate a sum of set numbers, throught the use of static variables and an addition function.
*/

#include <stdio.h>

// A static variable/function is one contained only to the file containing it
static int sum(int num) {
	printf("Add %d\n", num);
	static int total = 0;
	total += num;
	return total;
}

int main() {
	printf("%d \n", sum(55));
	printf("%d \n", sum(10));
	printf("%d \n", sum(23));
	return 0;
}
