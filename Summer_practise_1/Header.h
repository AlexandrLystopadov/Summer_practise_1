#pragma once
#include <stdio.h>
#include <math.h>

//����� � ������������� ������������
struct dot {
	int x;
	int y;
};
void point_search(float r, float x, float y);
void output_dot(int kol, struct dot* p);