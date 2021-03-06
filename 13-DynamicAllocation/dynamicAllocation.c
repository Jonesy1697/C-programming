﻿/* C tutorials followed from:
	http://www.learn-c.org/
	Lesson 13
	
A program whch will dynamically allocate a point structure, using Malloc
*/

#include <stdio.h>
#include <stdlib.h>

// Define the structure
typedef struct {
	int x;
	int y;
} point;

int main() {
	// Defines mypoint as pointer of structure point 
	point * mypoint;

	//Allocate a new point
	mypoint = malloc(sizeof(point));

	// Access point's members
	mypoint->x = 10;
	mypoint->y = 5;

	printf("mypoint coordinates: %d, %d\n", mypoint->x, mypoint->y);

	// Release the structure
	free(mypoint);
	return 0;
}
