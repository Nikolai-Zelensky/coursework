#pragma once

#include <iostream>
#include "Colors.h"
#include "GOTO.h"

using namespace std;

void Blank()
{
	SetColor(Green, Green); GotoXY(15, 25);
	cout << "Курсач \"Змейка\" Николая Зеленского" << endl;

	GotoXY(60, 1); cout << " Ваша задача: собрать 75 яблок " << endl;

	GotoXY(60, 2); cout << " Данные:" << endl;

	GotoXY(60, 3); cout << " Яблок:0" << endl;

	GotoXY(60, 4); cout << " Длина:3" << endl;

	GotoXY(60, 5); cout << " Скорость:0" << endl;

	GotoXY(60, 7); cout << " Управление:" << endl;

	GotoXY(60, 8); cout << " Esc: Выход из игры" << endl;

	GotoXY(60, 9); cout << " P: Пауза" << endl;

	GotoXY(60, 10); printf("%c", 24); cout << " :Вверх" << endl;

	GotoXY(60, 11); printf("%c", 25); cout << " :Вниз" << endl;

	GotoXY(60, 12); printf("%c", 60); cout << " :Влево" << endl;

	GotoXY(60, 13); printf("%c", 62); cout << " :Вправо" << endl;

	{
		SetColor(Green, Green);

		GotoXY(0, 0);

		int m;

		for (m = 0; m < 60; m++)
		{
			cout<<("V");
		}
	}
	
	{
		SetColor(Green, Green);
		
		GotoXY(0, 22);

		int m;

		for (m = 0; m < 60; m++)
		{
			cout<<("V");
		}
	}
	
	{
		SetColor(Green, Green);
		
		int j;
		
		for (j = 0; j < 22; j++)
		{
			GotoXY(0, j);
			cout << ("V\n");
		}
	}

	{
		SetColor(Green, Green);
		
		int j;

		for (j = 0; j < 22; j++)
		{
			GotoXY(59, j);
			cout << ("V\n");
		}
	}
}