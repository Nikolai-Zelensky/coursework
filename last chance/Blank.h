#pragma once

#include <iostream>
#include "Colors.h"
#include "GOTO.h"

using namespace std;

void Blank()
{
	SetColor(Green, Green); GotoXY(15, 25);
	cout << "������ \"������\" ������� ����������" << endl;

	GotoXY(60, 1); cout << " ���� ������: ������� 75 ����� " << endl;

	GotoXY(60, 2); cout << " ������:" << endl;

	GotoXY(60, 3); cout << " �����:0" << endl;

	GotoXY(60, 4); cout << " �����:3" << endl;

	GotoXY(60, 5); cout << " ��������:0" << endl;

	GotoXY(60, 7); cout << " ����������:" << endl;

	GotoXY(60, 8); cout << " Esc: ����� �� ����" << endl;

	GotoXY(60, 9); cout << " P: �����" << endl;

	GotoXY(60, 10); printf("%c", 24); cout << " :�����" << endl;

	GotoXY(60, 11); printf("%c", 25); cout << " :����" << endl;

	GotoXY(60, 12); printf("%c", 60); cout << " :�����" << endl;

	GotoXY(60, 13); printf("%c", 62); cout << " :������" << endl;

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