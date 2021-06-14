#pragma once

#include "Apple.h"

enum { END, STENKA, PLUS, MOVE };

int Move(Game& g)
{
	int& n = g.uzhik.PCount;

	COORD head = g.uzhik.t[n - 1];//������

	COORD tail = g.uzhik.t[0];//�����

	COORD next;

	next.X = head.X + g.dx;//�������� ��������� ����� �� ����������� X

	next.Y = head.Y + g.dy;//�������� ��������� ����� �� ����������� Y

	if (next.X < 1 || next.Y < 1 || next.X > 58 || next.Y > 21)//���������, �� �������� �� � ����� ���� ?

		return STENKA;

	if (n > 4)
	{
		for (int i = 0; i < n; i++)

			if (next.X == g.uzhik.t[i].X && next.Y == g.uzhik.t[i].Y)//���������, �� ������� �� �� ����?

				return END;
	}

	if (next.X == g.apple.X && next.Y == g.apple.Y)
	{
		COORD* temp = new COORD[++n];//����� ����� ������� �� 1

		for (int i = 0; i < n; i++)
		{
			temp[i] = g.uzhik.t[i];//������������
		}

		temp[n - 1] = next;//��������� ����

		delete[] g.uzhik.t;

		g.uzhik.t = temp;

		SetConsoleCursorPosition(hConsole, head);

		SetConsoleTextAttribute(hConsole, 0x0a);//����������� ������ ������� �����

		cout<<("*");

		SetConsoleCursorPosition(hConsole, next);

		SetConsoleTextAttribute(hConsole, 0x0a);

		cout<<("@");

		Apple(g);

		return PLUS;
	}

	for (int i = 0; i < n - 1; i++)

		g.uzhik.t[i] = g.uzhik.t[i + 1];

	g.uzhik.t[n - 1] = next;

	SetConsoleCursorPosition(hConsole, tail);//����������� �������

	printf(" ");

	SetConsoleCursorPosition(hConsole, head);

	SetConsoleTextAttribute(hConsole, 0x0a);//������ ����� ���� � ������� ����

	printf("*");

	SetConsoleCursorPosition(hConsole, next);

	SetConsoleTextAttribute(hConsole, 0x0f);//������ ������ � ����� ���� (������ ����)

	printf("%c", 1);

	return MOVE;
}