#pragma once

void GotoXY(short X, short Y)//Функция размещение объекта
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	
	COORD coord = { X, Y };//определяет координаты символьного знакоместа в экранном буфере консоли

	SetConsoleCursorPosition(hStdOut, coord);
}