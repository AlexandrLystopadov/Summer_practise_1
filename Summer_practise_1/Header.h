/**
* @file Summer_practise.cpp
* @author ���������� �.�., 515-�
* @date 06.07.2022
* @brief ˳��� ��������
*/
#pragma once
#include <stdio.h>
#include <math.h>

//����� � ������������� ������������
struct dot {
	long x;
	long y;
};
//�������� ������� ������ ����� � ������������� ������������
int point_search(float r, float x, float y);
//�������� ������� ������ �����
void output_dot(int kol, struct dot* p);