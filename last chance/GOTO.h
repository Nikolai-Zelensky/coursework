#pragma once

void GotoXY(short X, short Y)//������� ���������� �������
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	
	COORD coord = { X, Y };//���������� ���������� ����������� ���������� � �������� ������ �������

	SetConsoleCursorPosition(hStdOut, coord);
}