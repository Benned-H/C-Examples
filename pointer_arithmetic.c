/**
* Example code with pointer arithmetic in C.
* Author: Benned Hedegaard
* Last revised: 11/1/2019
*/
#import <stdio.h>

struct s1
{
	int i1;
	float f1;
	float f2;
	int i2;
};

int main()
{
	struct s1 A;

	int* p_i;
	float* p_f;

	p_i = &A.i1;
	printf("A.i1 is located at %p\n", p_i);
	p_f = &A.f1;
	printf("A.f1 is located at %p\n", p_f);
	p_f = &A.f2;
	printf("A.f2 is located at %p\n", p_f);
	p_i = &A.i2;
	printf("A.i2 is located at %p\n", p_i);

	p_f = &A.f1 + 1;
	printf("A.f1 + 1 gives location %p\n", p_f);

	return 0;
}