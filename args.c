/*
* Simple program exploring commandline arguments for C.
* Run this from the commandline, type extra items after ./args
*
* Author: Benned Hedegaard
* Date: 10/2/2019
*/
#import <stdio.h>

int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
		printf("Argument %d: %s\n", i, argv[i]);
	return 0;
}