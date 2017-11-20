/*
 * Proj_5_4.c
 *
 *  Created on: Feb 17, 2017
 *      Author: victor
 */


#include <stdio.h>

int main()
{

	int wind_speed;

	printf("Enter a wind speed in knots: ");
	scanf("%d", &wind_speed);

	if (wind_speed < 1)
		printf("Description: Calm\n");
	else if (wind_speed >= 1 && wind_speed <= 3)
		printf("Description: Light air\n");
	else if (wind_speed >= 4 && wind_speed <= 27)
		printf("Description: Breeze\n");
	else if (wind_speed >= 28 && wind_speed <= 47)
		printf("Description: Gale\n");
	else if (wind_speed >= 48 && wind_speed <= 63)
		printf("Description: Storm\n");
	else
		printf("Description: Hurricane\n");

	return 0;
}
