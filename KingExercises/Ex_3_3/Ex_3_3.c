/*
 * Ex_3_3.c
 *
 *  Created on: Feb 11, 2017
 *      Author: victor
 */

#include <stdio.h>

int main()
{
	int x1, x2, x3;
	float y1, y2, y3 = 10;
	/*
	printf("(a1) Enter a number: \n");
	scanf("%d", &x1);
	printf("%d\n", x1);

	printf("(a2) Enter a number: \n");
	scanf(" %d", &x1);
	printf("%d\n", x1);

	printf("(b1) Enter a number: \n");
	scanf("%d-%d-%d", &x1, &x2, &x3);
	printf("%d-%d-%d\n", x1, x2, x3);

	printf("(b2) Enter a number: \n");
	scanf("%d -%d -%d", &x1, &x2, &x3);
	printf("%d-%d-%d\n", x1, x2, x3);

	printf("(c1) Enter a number: \n");
	scanf("%f", &y1);
	printf("%f\n", y1);
	*/
	printf("(c2) Enter a number: \n");
	scanf("%f ", &y1);
	printf("%f\n", y1);

	/* Explanation of white space after format specifier:
	 * A space after the format specifier means that scanf expects any non
	 * white space input in order to break out of the function. However,
	 * this input is saved to be processed by the next scanf. Unexpected
	 * results will occur because the next scanf does not know what the
	 * previous input should be. The lesson learned is not to use any space
	 * after the final format specifier!
	 */

	printf("(d1) Enter a number: \n");
	scanf("%f,%f", &y2, &y3);
	printf("%f,%f\n", y2, y3);

	printf("(d2) Enter a number: \n");
	scanf("%f, %f", &y2, &y3);
	printf("%f,%f\n", y2, y3);

	return 0;
}
