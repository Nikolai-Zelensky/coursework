#include <Windows.h>

#include "HANDLE.h"
#include "MC.h"

void main()
{
	
	setlocale(LC_ALL, "Russian");

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);//�������� ���������� �������

	CONSOLE_CURSOR_INFO structCursorInfo;//����������� �� �������

	GetConsoleCursorInfo(hConsole, &structCursorInfo);

	structCursorInfo.bVisible = FALSE;

	SetConsoleCursorInfo(hConsole, &structCursorInfo);

	MC();//Main cycle - �������� ���� ����
}