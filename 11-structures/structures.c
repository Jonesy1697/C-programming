﻿/* C tutorials followed from:
	http://www.learn-c.org/
	Lesson 11

A program which will define a new data structure, made up on other individual data elements
*/

#include <stdio.h>

//Defined structure holding a name and age
typedef struct {
	char * name;
	int age;
} person;

int main() {
	person john;

	/* testing code */
	john.name = "John";
	john.age = 27;
	printf("%s is %d years old.", john.name, john.age);
}

