#pragma once

typedef struct Snake // ��������� ������
{
	COORD* t; //�����

	int PCount; //���������� �����

}Snake;

typedef struct Game//������ ������, �����, ������������ �� X � Y, ��������, �����������
{
	Snake uzhik;//������

	COORD apple;//������

	int dx, dy;//������������

	int pause;//��������

	int nap;//�����������
}Game;