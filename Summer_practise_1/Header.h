/**
* @file Summer_practise.cpp
* @author Листопадов О.О., 515-б
* @date 06.07.2022
* @brief Літня практика
*/
#pragma once
#include <stdio.h>
#include <math.h>

//точки з цілочисловими координатами
struct dot {
	long x;
	long y;
};
//прототип функції пошуку точок з цілочисловими координатами
int point_search(float r, float x, float y);
//прототип функції виводу точки
void output_dot(int kol, struct dot* p);