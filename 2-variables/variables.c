﻿/* C tutorials followed from:
	http://www.learn-c.org/
	Lesson 2
	
This program will calculate and print the sum of three specified numbers, each of different data types.
*/

#include <stdio.h>

int main() {
	int a = 3;
	float b = 4.5, sum = 0;
	double c = 5.25; 

	sum = a + b + c;

	printf("The sum of a, b, and c is %f.", sum); // Final result 
	getchar();

	return 0;
}
