#pragma once

#include "Apple.h"

enum { END, STENKA, PLUS, MOVE };

int Move(Game& g)
{
	int& n = g.uzhik.PCount;

	COORD head = g.uzhik.t[n - 1];//голова

	COORD tail = g.uzhik.t[0];//хвост

	COORD next;

	next.X = head.X + g.dx;//проверка следующей точки по направлению X

	next.Y = head.Y + g.dy;//проверка следующей точки по направлению Y

	if (next.X < 1 || next.Y < 1 || next.X > 58 || next.Y > 21)//проверяем, не уперлась ли в стену змея ?

		return STENKA;

	if (n > 4)
	{
		for (int i = 0; i < n; i++)

			if (next.X == g.uzhik.t[i].X && next.Y == g.uzhik.t[i].Y)//проверяем, не наехали ли на себя?

				return END;
	}

	if (next.X == g.apple.X && next.Y == g.apple.Y)
	{
		COORD* temp = new COORD[++n];//новый масив больший на 1

		for (int i = 0; i < n; i++)
		{
			temp[i] = g.uzhik.t[i];//перекопируем
		}

		temp[n - 1] = next;//добавляем одну

		delete[] g.uzhik.t;

		g.uzhik.t = temp;

		SetConsoleCursorPosition(hConsole, head);

		SetConsoleTextAttribute(hConsole, 0x0a);//закрашиваем яблоко которое съели

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

	SetConsoleCursorPosition(hConsole, tail);//закрашиваем хвостик

	printf(" ");

	SetConsoleCursorPosition(hConsole, head);

	SetConsoleTextAttribute(hConsole, 0x0a);//красим хвост змеи в зеленый цвет

	printf("*");

	SetConsoleCursorPosition(hConsole, next);

	SetConsoleTextAttribute(hConsole, 0x0f);//красим курсор в белый цвет (голову змеи)

	printf("%c", 1);

	return MOVE;
}