/**
* @file Summer_practise.cpp
* @author Листопадов О.О., 515-б
* @date 06.07.2022
* @brief Літня практика
*/
#include "Header.h"

void point_search(float r, float x, float y) {
	struct dot one;
	float x1, y1, r1;
	r = modff(r, &r1);
	x = modff(x, &x1);
	y = modff(y, &y1);

	int kol = 0;

	for (int i = 0; i < 1; i++) {

		for (int j = r1 + (y + y1); j >= (y + y1) - (r + r1); j--) {

			kol++;
			one.x = (x + x1) + i;
			one.y = j;

			if (sqrt(pow(one.x - (x + x1), 2) + pow(one.y - (y + y1), 2)) <= r + r1) {
				printf("point #%i (%i, %i)\n", kol, one.x, one.y);
			}
		}
	}

	for (int i = 0; i < 1; i++) {

		for (int j = (x + x1) - r1; j <= (x + x1) + (r + r1); j++) {

			kol++;
			one.x = j;
			one.y = (y + y1) + i;
			if (sqrt(pow(one.x - (x + x1), 2) + pow(one.y - (y + y1), 2)) <= r + r1) {
				printf("point #%i (%i, %i)\n", kol, one.x, one.y);
			}
		}
	}



}