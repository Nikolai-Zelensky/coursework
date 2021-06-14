#pragma once

#include <Windows.h>
#include <conio.h>
#include "Move.h"
#include "Manage.h"
#include "SpeedOfGame.h"

void MC()
{
	int key = 0, count = 0;

	bool pause = true;

	Game game;

	SpeedOfGame(game);

	Blank();

	srand(time(0));

	
	while (key != 27)
	{
		while (!_kbhit())//ждем пока нажмем на клавишу
		{
			if (pause == true)
			{
				Sleep(1);

				continue;
			}

			switch (Move(game))//движение
			{
			case PLUS:

				++count;

				game.pause -= 1;

				GotoXY(60, 1); cout << " Ваша задача: собрать 75 яблок " << endl;

				GotoXY(60, 2); cout << " Данные:" << endl;

				GotoXY(60, 3); cout << " Яблок: " << count << endl;

				GotoXY(60, 4); cout << " Длина: " << game.uzhik.PCount << endl;

				GotoXY(60, 5); cout << " Скорость: " << game.pause << endl;

				GotoXY(60, 7); cout << " Управление:" << endl;

				GotoXY(60, 8); cout << " Esc: Выход из игры" << endl;

				GotoXY(60, 9); cout << " P: Пауза" << endl;

				GotoXY(60, 10); printf("%c", 24); cout << " :Вверх" << endl;

				GotoXY(60, 11); printf("%c", 25); cout << " :Вниз" << endl;

				GotoXY(60, 12); printf("%c", 60); cout << " :Влево" << endl;

				GotoXY(60, 13); printf("%c", 62); cout << " :Вправо" << endl;

				if (count == 75)
				{
					GotoXY(25, 10); cout << "Вы выиграли!" << endl;

					GotoXY(15, 6); cout<<("\n\t\t\t");

					GotoXY(15, 7); cout<<("\n\t\t\t");

					_getch();

					return;
				}
				break;

			case STENKA:

			case END:

				GotoXY(25, 10);

				printf("Вы проиграли!:(((\n\n\t\t\t");

				_getch();

				return;
			}

			Sleep(game.pause);//Задержка
		}
		
		key = _getch();

		if (key == 'P' || key == 'p' || key == 'З' || key == 'з')

			pause = !pause;
		
		
		else if (key == 0 || key == 224)
		{
			key = _getch();

			if (key == 72 && game.nap != DOWN)
			{
				game.nap = UP;
				game.dx = 0;
				game.dy = -1;
			}

			else if (key == 80 && game.nap != UP)
			{
				game.nap = DOWN;
				game.dx = 0;
				game.dy = 1;
			}

			else if (key == 75 && game.nap != RIGHT)
			{
				game.nap = LEFT;
				game.dx = -1;
				game.dy = 0;
			}

			else if (key == 77 && game.nap != LEFT)
			{
				game.nap = RIGHT;
				game.dx = 1;
				game.dy = 0;
			}
		}
	}
}