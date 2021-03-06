﻿/* C tutorials followed from:
	http://www.learn-c.org/
	Lesson 12
	
A program to test passing byRef, in which a persons birthday will be increased by one in a written function.
*/

#include <stdio.h>

// Define the structure
typedef struct {
	char * name;
	int age;
} person;

/* function declaration */
void birthday(person * p) {
	(*p).age++;	//Increment value age from the defined structure by 1
}

int main() {
	//Declaration of a person, from the above structure 
	person john;		
	john.name = "John";
	john.age = 27;

	printf("%s is %d years old.\n", john.name, john.age);
	birthday(&john); //Function call
	printf("Happy birthday! %s is now %d years old.\n", john.name, john.age);

	return 0;
}
