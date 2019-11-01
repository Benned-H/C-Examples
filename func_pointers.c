/*
* Demonstrating function pointers in C.
* Author: Benned Hedegaard
* Date: 11/1/2019
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
		printf("Invalid input. Please input two integer arguments.\n");
		return 0;
	}

	int int1 = atoi(argv[1]);
	int int2 = atoi(argv[2]);

	int (*v)(int a, int b);

	v = sum; // v nows points to the sum function.
	printf("Address of function sum: %p\n", v);
	printf("Indirectly calling sum(%d, %d): %d\n", int1, int2, v(int1,int2));

	return 0;
}