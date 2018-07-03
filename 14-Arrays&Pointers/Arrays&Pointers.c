/* C tutorials followed from:
http://www.learn-c.org/
Lesson 14

This program will store the first three rows of Pascals triangle using dynamic memory allocation, arrays and pointers.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, j;
	int **pnumbers;

	/* Allocate memory for holding three rows */
	pnumbers = (int **) malloc(3 *sizeof(int *));

	/* Allocate memory for storing the individual elements in a row */
	pnumbers[0] = (int *)malloc(1 * sizeof(int));
	pnumbers[1] = (int *)malloc(2 * sizeof(int));
	pnumbers[2] = (int *)malloc(3 * sizeof(int));

	pnumbers[0][0] = 1;
	pnumbers[1][0] = 1;
	pnumbers[1][1] = 1;
	pnumbers[2][0] = 1;
	pnumbers[2][1] = 2;
	pnumbers[2][2] = 1;

	for (i = 0; i < 3; i++) {
		for (j = 0; j <= i; j++) {
			printf("%d", pnumbers[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < 3; i++) {
		free(pnumbers[i]);
	}

	free(pnumbers);

	return 0;
}
