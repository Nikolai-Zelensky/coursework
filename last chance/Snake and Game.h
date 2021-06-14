#pragma once

typedef struct Snake // структура змейка
{
	COORD* t; //точки

	int PCount; //количество яблок

}Snake;

typedef struct Game//данные змейки, яблок, передвижение по X и Y, задержка, направление
{
	Snake uzhik;//змейка

	COORD apple;//яблоко

	int dx, dy;//передвижение

	int pause;//задержка

	int nap;//направление
}Game;