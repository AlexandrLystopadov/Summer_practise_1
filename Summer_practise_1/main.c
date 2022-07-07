/**
* @file Summer_practise.cpp
* @author ���������� �.�., 515-�
* @date 06.07.2022
* @brief ˳��� ��������
*/
/*�� ����������� ������ ������ ���� � ������� � ����� (�; �) �
������� R, �� �, �, R � ���� �����. ��������� ��������, �� �������
������� ����� � ������������� ������������, �� ��������� ���������
����.*/
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
