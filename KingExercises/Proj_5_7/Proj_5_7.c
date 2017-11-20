/*
 * Proj_5_7.c
 *
 *  Created on: Feb 17, 2017
 *      Author: victor
 */

#include <stdio.h>

int main()
{
	int i1, i2, i3, i4, smallest, largest;

	printf("Enter four integers: ");
	scanf("%d %d %d %d", &i1, &i2, &i3, &i4);

	smallest = i1;
	largest = i1;

	if (i2 > i1)
		largest = i2;
	else
		smallest = i2;

	if (i3 > largest)
		largest = i3;
	else if (i3 < smallest)
		smallest = i3;

	if (i4 > largest)
		largest = i4;
	else if (i4 < smallest)
		smallest = i4;

	printf("Largest: %d\n", largest);
	printf("Smallest: %d\n", smallest);

	return 0;

}
