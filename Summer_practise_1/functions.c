/**
* @file Summer_practise.cpp
* @author ���������� �.�., 515-�
* @date 06.07.2022
* @brief ˳��� ��������
*/
#include "Header.h"
//������� ������ �����
void output_dot(int kol, struct dot* p) {

	printf("point #%i (%i, %i)\n", kol,  p -> x, p->y);

}
//������� ������ ����� � ������������� ������������
void point_search(float r, float x, float y) {

	struct dot one;
	//�������� �� ��'���
	struct one* p;
	p = &one;

	float x1, y1, r1;
	//��������� �� ���� �� ������ �������
	r = modff(r, &r1);
	x = modff(x, &x1);
	y = modff(y, &y1);
	//�������� �����
	int kol = 0;
	//���������
	for (int i = 0; i < 1; i++) {

		for (int j = r1 + (y + y1); j >= (y + y1) - (r + r1); j--) {

			kol++;
			one.x = (x + x1) + i;
			one.y = j;
			if (one.x == x1 && one.y == y1) {
				goto mark;
			}
			//����� ������� ������
			else if (sqrt(pow(one.x - (x + x1), 2) + pow(one.y - (y + y1), 2)) <= r + r1) {
				output_dot( kol, p);
			}
		mark:
		}
	}
	//�����������
	for (int i = 0; i < 1; i++) {

		for (int j = (x + x1) - r1; j <= (x + x1) + (r + r1); j++) {

			kol++;
			one.x = j;
			one.y = (y + y1) + i;
			//����� ������� ������
			if (sqrt(pow(one.x - (x + x1), 2) + pow(one.y - (y + y1), 2)) <= r + r1) {
				output_dot(kol, p);
			}
		}
	}

	//1 ������
	for (int i = 1; (x + x1) + i < (x + x1) + (r + r1); i++) {

		for (int j = 1; j < (r1 + r); j++) {

			kol++;
			one.x = (x + x1) + i;
			one.y = (y + y1) + j;
			//����� ������� ������
			if (sqrt(pow(one.x - (x + x1), 2) + pow(one.y - (y + y1), 2)) <= r + r1) {
				output_dot(kol, p);
			}

		}
	}
	//2 ������
	for (int i = -1; fabs(i) < (r + r1); i--) {

		for (int j = 1; j < (r + r1); j++) {

			kol++;
			one.x = (x + x1) + i;
			one.y = (y + y1) + j;
			//����� ������� ������
			if (sqrt(pow(one.x - (x + x1), 2) + pow(one.y - (y + y1), 2)) <= r + r1) {
				output_dot(kol, p);
			}
		}
	}
	//4 ������
	for (int i = 1; i < (r + r1); i++) {

		for (int j = -1; fabs(j) < (r + r1); j--) {

			kol++;
			one.x = (x + x1) + i;
			one.y = (y + y1) + j;
			//����� ������� ������
			if (sqrt(pow(one.x - (x + x1), 2) + pow(one.y - (y + y1), 2)) <= r + r1) {
				output_dot(kol, p);
			}
		}
	}
	//3 ������
	for (int i = -1; fabs(i) < (r + r1); i--) {

		for (int j = -1; fabs(j) < (r + r1); j--) {

			kol++;
			one.x = (x + x1) + i;
			one.y = (y + y1) + j;
			//����� ������� ������
			if (sqrt(pow(one.x - (x + x1), 2) + pow(one.y - (y + y1), 2)) <= r + r1) {
				output_dot(kol, p);
			}
		}
	}

}