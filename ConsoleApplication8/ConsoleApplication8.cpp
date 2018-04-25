// ConsoleApplication8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <clocale>
#include "Point.h"
#include <iostream>
#include "Circle.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	float x1, y1, x2, y2;
	Point point;
	//� ������� main()
	//	2.1 ������� � ������� ���������� �� ��� X ������ �����.
	//	2.2 ������� � ������� ���������� �� ��� Y ������ �����.
	//	2.3 ������� � ������� ���������� �� ��� X ������ �����.
	//	2.4 ������� � ������� ���������� �� ��� Y ������ �����.
	//	2.5 �������� ������ ������ Point.
	//	2.5 ����������� ���������� ����� �������.
	//	2.6 �������� � ������� ����������� ����������.

	cout << "������� x1: ";
	cin >> x1;
	cout << "������� y1: ";
	cin >> y1;
	cout << "������� x2: ";
	cin >> x2;
	cout << "������� y2: ";
	cin >> y2;

	point.PointS(x1, x2);
	point.Tochka(x2, y2);


	//� ������� main()
	float radius = 0;
	//	2.1 �������� ������ ������ Circle.
	Circle circle;
	//	2.2 ������� � ������� �������� ������� ����������.
	cout << "������� ������ ����������: ";
	cin >> radius;
	//	2.3 ���������� ������ �����.
	circle.setRadius(radius);
	//	2.4 ����������� � �������� ����� ����������.
	circle.LengthCircle(radius);
	//	2.5 ����������� � �������� ������� ����������.
	circle.SquareCircle(radius);

	return 0;
}

