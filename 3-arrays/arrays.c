﻿/* C tutorials followed from:
	http://www.learn-c.org/
	Lesson 3
	
This program will declare an array to store a grade, made up of many percentages, which will be used to calculate a final average.
*/

#include <stdio.h>

int main() {
	
	int grades[10];
	int average;

	grades[0] = 85;
	grades[1] = 90;
	grades[2] = 80;

	average = (grades[0] + grades[1] + grades[2]) / 3;
	printf("The average of the 3 grades is: %d", average);

	getchar();

	return 0;
}
