/**
* @file Summer_practise.cpp
* @author Листопадов О.О., 515-б
* @date 06.07.2022
* @brief Літня практика
*/
/*На координатній площині задано коло з центром у точці (х; у) і
радіусом R, де х, у, R – дійсні числа. Розробити програму, що визначає
кількість точок з цілочисловими координатами, які потрапили всередину
кола.*/
#include "Header.h"


int main() {



	float r, x, y;

	printf("x = ");
	scanf_s("%f", &x);
	printf("y = ");
	scanf_s("%f", &y);
	printf("r = ");
	if (scanf_s("%f", &r) == 0) {
		printf("You entered a negative number\n");
		return 0;
	}
	printf("\nRadius %.2f with centre (%.2f, %.2f)\n", r, x, y);

	point_search(r, x, y);
	return 0;
}
