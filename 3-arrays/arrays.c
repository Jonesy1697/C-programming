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