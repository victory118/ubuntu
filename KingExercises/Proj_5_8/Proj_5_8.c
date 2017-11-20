/*
 * Proj_5_8.c
 *
 *  Created on: Feb 17, 2017
 *      Author: victor
 */

#include <stdio.h>

int main()
{
	int hour, min, min_sm, dt_c, at_c, dt_min, dt_hr, at_min, at_hr;
	int dt1 = 8*60, at1 = 10*60 + 16;
	int dt2 = 9*60 + 43, at2 = 11*60 + 52;
	int dt3 = 11*60 + 19, at3 = 13*60 + 31;
	int dt4 = 12*60 + 47, at4 = 16*60;
	int dt5 = 14*60, at5 = 18*60 + 8;
	int dt6 = 16*60 + 45, at6 = 17*60 + 55;
	int dt7 = 19*60, at7 = 21*60 + 20;
	int dt8 = 21*60 + 45, at8 = 23*60 + 58;

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hour, &min);

	min_sm = hour*60 + min;

	if (min_sm < dt1) {
		dt_c = dt1;
		at_c = at1;
	}
	else if (min_sm < dt2) {
		dt_c = ((min_sm - dt1) < (dt2 - min_sm)) ? dt1 : dt2;
		at_c = ((min_sm - dt1) < (dt2 - min_sm)) ? at1 : at2;
	}
	else if (min_sm < dt3) {
		dt_c = ((min_sm - dt2) < (dt3 - min_sm)) ? dt2 : dt3;
		at_c = ((min_sm - dt2) < (dt3 - min_sm)) ? at2 : at3;
	}
	else if (min_sm < dt4) {
		dt_c = ((min_sm - dt3) < (dt4 - min_sm)) ? dt3 : dt4;
		at_c = ((min_sm - dt3) < (dt4 - min_sm)) ? at3 : at4;
	}
	else if (min_sm < dt5) {
		dt_c = ((min_sm - dt4) < (dt5 - min_sm)) ? dt4 : dt5;
		at_c = ((min_sm - dt4) < (dt5 - min_sm)) ? at4 : at5;
	}
	else if (min_sm < dt6) {
		dt_c = ((min_sm - dt5) < (dt6 - min_sm)) ? dt5 : dt6;
		at_c = ((min_sm - dt5) < (dt6 - min_sm)) ? at5 : at6;
	}
	else if (min_sm < dt7) {
		dt_c = ((min_sm - dt6) < (dt7 - min_sm)) ? dt6 : dt7;
		at_c = ((min_sm - dt6) < (dt7 - min_sm)) ? at6 : at7;
	}
	else if (min_sm < dt8) {
		dt_c = ((min_sm - dt7) < (dt8 - min_sm)) ? dt7 : dt8;
		at_c = ((min_sm - dt7) < (dt8 - min_sm)) ? at7 : at8;
	}
	else {
		dt_c = dt8;
		at_c = at8;
	}

	dt_hr = dt_c/60;
	dt_min = dt_c%60;
	at_hr = at_c/60;
	at_min = at_c%60;

	if (dt_hr < 12)
		printf("Closest departure time is %d:%.2d a.m., ", dt_hr, dt_min);
	else if (dt_hr == 12)
		printf("Closest departure time is %d:%.2d p.m., ", dt_hr, dt_min);
	else
		printf("Closest departure time is %d:%.2d p.m., ", dt_hr-12, dt_min);

	if (at_hr < 12)
		printf("arriving at %d:%.2d a.m.\n", at_hr, at_min);
	else if (at_hr == 12)
		printf("arriving at %d:%.2d p.m.\n", at_hr, at_min);
	else
		printf("arriving at %d:%.2d p.m.\n", at_hr-12, at_min);

	return 0;

}
