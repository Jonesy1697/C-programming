﻿/* C tutorials followed from:
	http://www.learn-c.org/
	Lesson 4

Adding onto Lesson 3, this program will declare several seperate grades, and then calculate the averages for each.
*/

#include <stdio.h>

int main() {
	int grades[2][5];
	float average;
	int i;
	int j;
			
	//Declaration of one set of grades
	grades[0][0] = 80;
	grades[0][1] = 70;
	grades[0][2] = 65;
	grades[0][3] = 89;
	grades[0][4] = 90;

	//Declaration of a second set of grades
	grades[1][0] = 85;
	grades[1][1] = 80;
	grades[1][2] = 80;
	grades[1][3] = 82;
	grades[1][4] = 87;
	
	//Calculation and output of each set of grades
	for (i = 0; i < 2; i++) {
		average = 0;
			
		for (j = 0; j < 5; j++) {
			average += grades[i][j];
		}

		average /= 5.0;
		printf("The average marks obtained in subject %d is: %.2f\n", i, average);
	}

	getchar();

	return 0;
}
