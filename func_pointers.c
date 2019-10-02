/*
* Demonstrating function pointers in C.
* Author: Benned Hedegaard
* Date: 10/2/2019
*/
#import <stdio.h>
#include <stdlib.h> // For atoi function.

int sum(int a, int b)
{
	return a + b;
}

int main(int argc, char *argv[])
{
	if (argc < 3) // Safety check. Require two numbers to add.
	{
		printf("Invalid input. Please input two integers as arguments.\n");
		return 0;
	}

	char* in1 = argv[1];
	char* in2 = argv[2];
	int int1 = atoi(in1);
	int int2 = atoi(in2);

	int (*v)(int a, int b);

	v = sum; // v nows points to the sum function.
	printf("Address of function sum: %p\n", v);
	printf("Indirectly calling sum(%d, %d): %d\n", int1, int2, v(int1,int2));

	return 0;
}