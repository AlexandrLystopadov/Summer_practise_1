/**
* @file Summer_practise.cpp
* @author Листопадов О.О., 515-б
* @date 06.07.2022
* @brief Літня практика
*/
#include "Header.h"
//функція виводу точки
void output_dot(int kol, struct dot* p) {

	printf("point #%i (%i, %i)\n", kol,  p -> x, p->y);

}
//функція пошуку точок з цілочисловими координатами
void point_search(float r, float x, float y) {

	struct dot one;
	//вказівник на об'єкт
	struct one* p;
	p = &one;

	float x1, y1, r1;
	//розділення на цілу та дробну частину
	r = modff(r, &r1);
	x = modff(x, &x1);
	y = modff(y, &y1);
	//лічильник точок
	int kol = 0;
	//вертикаль
	for (int i = 0; i < 1; i++) {

		for (int j = r1 + (y + y1); j >= (y + y1) - (r + r1); j--) {

			kol++;
			one.x = (x + x1) + i;
			one.y = j;
			if (one.x == x1 && one.y == y1) {
				goto mark;
			}
			//умова границі пошуку
			else if (sqrt(pow(one.x - (x + x1), 2) + pow(one.y - (y + y1), 2)) <= r + r1) {
				output_dot( kol, p);
			}
		mark:
		}
	}
	//горизонталь
	for (int i = 0; i < 1; i++) {

		for (int j = (x + x1) - r1; j <= (x + x1) + (r + r1); j++) {

			kol++;
			one.x = j;
			one.y = (y + y1) + i;
			//умова границі пошуку
			if (sqrt(pow(one.x - (x + x1), 2) + pow(one.y - (y + y1), 2)) <= r + r1) {
				output_dot(kol, p);
			}
		}
	}

	//1 чверть
	for (int i = 1; (x + x1) + i < (x + x1) + (r + r1); i++) {

		for (int j = 1; j < (r1 + r); j++) {

			kol++;
			one.x = (x + x1) + i;
			one.y = (y + y1) + j;
			//умова границі пошуку
			if (sqrt(pow(one.x - (x + x1), 2) + pow(one.y - (y + y1), 2)) <= r + r1) {
				output_dot(kol, p);
			}

		}
	}
	//2 чверть
	for (int i = -1; fabs(i) < (r + r1); i--) {

		for (int j = 1; j < (r + r1); j++) {

			kol++;
			one.x = (x + x1) + i;
			one.y = (y + y1) + j;
			//умова границі пошуку
			if (sqrt(pow(one.x - (x + x1), 2) + pow(one.y - (y + y1), 2)) <= r + r1) {
				output_dot(kol, p);
			}
		}
	}
	//4 чверть
	for (int i = 1; i < (r + r1); i++) {

		for (int j = -1; fabs(j) < (r + r1); j--) {

			kol++;
			one.x = (x + x1) + i;
			one.y = (y + y1) + j;
			//умова границі пошуку
			if (sqrt(pow(one.x - (x + x1), 2) + pow(one.y - (y + y1), 2)) <= r + r1) {
				output_dot(kol, p);
			}
		}
	}
	//3 чверть
	for (int i = -1; fabs(i) < (r + r1); i--) {

		for (int j = -1; fabs(j) < (r + r1); j--) {

			kol++;
			one.x = (x + x1) + i;
			one.y = (y + y1) + j;
			//умова границі пошуку
			if (sqrt(pow(one.x - (x + x1), 2) + pow(one.y - (y + y1), 2)) <= r + r1) {
				output_dot(kol, p);
			}
		}
	}

}