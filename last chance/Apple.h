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
		x = rand() % 56 + 3;//кординаты €блока по X

		y = rand() % 19 + 3;//кординаты €блока по Y

		for (i = 0; i < n; i++)
		{
			if (x == g.uzhik.t[i].X && y == g.uzhik.t[i].Y)// проверка, чтобы €блоко не оказалось в самой змейке

				break;
		}

	} while (i < n);

	g.apple.X = x;

	g.apple.Y = y;

	SetConsoleCursorPosition(hConsole, g.apple);//переносим курсор в эту позицию

	SetConsoleTextAttribute(hConsole, 0x0a);//цвет €блока

	printf("%c", 15);//рисуем €блоко любым символом аски
}