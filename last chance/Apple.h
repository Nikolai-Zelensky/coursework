#pragma once

#include "Blank.h"
#include "HANDLE.h"
#include "Snake and Game.h"

void Apple(Game& g)
{
	int i, x, y;

	int n = g.uzhik.PCount;

	do
	{
		x = rand() % 56 + 3;//��������� ������ �� X

		y = rand() % 19 + 3;//��������� ������ �� Y

		for (i = 0; i < n; i++)
		{
			if (x == g.uzhik.t[i].X && y == g.uzhik.t[i].Y)// ��������, ����� ������ �� ��������� � ����� ������

				break;
		}

	} while (i < n);

	g.apple.X = x;

	g.apple.Y = y;

	SetConsoleCursorPosition(hConsole, g.apple);//��������� ������ � ��� �������

	SetConsoleTextAttribute(hConsole, 0x0a);//���� ������

	printf("%c", 15);//������ ������ ����� �������� ����
}