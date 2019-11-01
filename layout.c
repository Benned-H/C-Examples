/*
* Demonstrating memory layout in structs.
* Author: Benned Hedegaard
* Date: 11/1/2019
*/
#import <stdio.h>

int main()
{
	struct s1
	{
		int i1;
		int i2;
		long l;
	};

	struct s2
	{
		int i1;
		long l;
		int i2;
	};

	struct s3
	{
		char c;
		char c2;
		int i;
		long l;
	};

	struct s4
	{
		int i;
		char c;
		long l;
		char c2;
	};

	printf("char uses %lu bytes.\n", sizeof(char));
	printf("int uses %lu bytes.\n", sizeof(int));
	printf("long uses %lu bytes.\n\n", sizeof(long));

	printf("Size of s1 (int int long): %lu\n", sizeof(struct s1)); // Why would these numbers differ?
	printf("Size of s2 (int long int): %lu\n", sizeof(struct s2));

	printf("Size of s3 (char char int long): %lu\n", sizeof(struct s3)); // And these too?
	printf("Size of s4 (int char long char): %lu\n", sizeof(struct s4));

	return 0;
}