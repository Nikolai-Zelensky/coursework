#include <Windows.h>

#include "HANDLE.h"
#include "MC.h"

void main()
{
	
	setlocale(LC_ALL, "Russian");

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);//получаем дескриптор консоли

	CONSOLE_CURSOR_INFO structCursorInfo;//избавляемся от курсора

	GetConsoleCursorInfo(hConsole, &structCursorInfo);

	structCursorInfo.bVisible = FALSE;

	SetConsoleCursorInfo(hConsole, &structCursorInfo);

	MC();//Main cycle - основной цикл игры
}