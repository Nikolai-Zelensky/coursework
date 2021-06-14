#pragma once

#include "Apple.h"
#include "Snake and Game.h"

void SpeedOfGame(Game& g)
{
	system("cls");

	g.uzhik.PCount = 3;//сколько точек в змейки

	g.uzhik.t = new COORD[3];//создали точки

	for (int i = 0; i < 3; i++)
	{
		g.uzhik.t[i].X = 20 + i;

		g.uzhik.t[i].Y = 20;
	}
	g.dx = 1;

	g.dy = 0;

	g.pause = 100;//скорость передвижение змеи

	Apple(g);//рисуем €блокo
}