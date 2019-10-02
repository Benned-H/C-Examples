/*
* Machine-specific code exploring the size of basic types in C.
* Author: Benned Hedegaard
* Date: 10/2/2019
*/
#include <stdio.h>

int main()
{
	printf("The size of char is %lu bytes.\n", sizeof(char));
	printf("The size of int is %lu bytes.\n", sizeof(int));
	printf("The size of long is %lu bytes.\n", sizeof(long));
	printf("The size of long long is %lu bytes.\n\n", sizeof(long long));
	
	printf("The size of float is %lu bytes.\n", sizeof(float));
	printf("The size of double is %lu bytes.\n\n", sizeof(double));

	printf("The size of size_t is %lu bytes.\n", sizeof(size_t));
	printf("The size of int* is %lu bytes.\n", sizeof(int*));
	printf("The size of char* is %lu bytes.\n", sizeof(char*));
	return 0;
}
