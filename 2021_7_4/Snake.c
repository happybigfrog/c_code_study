#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "Snake.h"
#include <Windows.h>
#include <conio.h>

/*
1.�����ߵĽṹ��
2.��ʼ���ߺ�ʳ��
3.��ʼ��Ϸ
	�ߺ�ǽ����ײ
	�ߺ��������ײ
	�ߺ�ʳ�����ײ
		�������ʳ��
		�ߵ���������
		��������
	���������
4.��Ϸ����
*/
void Initfood()
{
	food[0] = rand() % LENGTH;
	food[1] = rand() % WIDTH;
}

void Initsnake()
{
	snake.size = 2;

	snake.body[0].X = LENGTH / 2;
	snake.body[0].Y = WIDTH / 2;

	snake.body[1].X = LENGTH / 2 - 1;
	snake.body[1].Y = WIDTH / 2;
}

void showUI()
{
	COORD coord;
	//����ĩβ�ո�
	coord.X = lx;
	coord.Y = ly;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	putchar(' ');
	//��ʾ�ߵ�λ��
	for (int i = 0; i < snake.size; i++)
	{
		coord.X = snake.body[i].X;
		coord.Y = snake.body[i].Y;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
		if (i == 0)
			putchar('@');
		else
			putchar('*');
	}
	//��ʾʳ���λ��
	coord.X = food[0];
	coord.Y = food[1];
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	putchar('#');
}

void PlayGame()
{
	char key = 'D';
	while (snake.body[0].X >= 0 && snake.body[0].X <= LENGTH && snake.body[0].Y >= 0 && snake.body[0].Y <= WIDTH)
	{
		//��ʾ����
		showUI();
		//�������
		while (_kbhit())
		{
			key = _getch();
		}
		switch (key)
		{
		case 'D':case 'd':dx = 1; dy = 0; break;
		case 'A':case 'a':dx = -1; dy = 0; break;
		case 'W':case 'w':dx = 0; dy = -1; break;
		case 'S':case 's':dx = 0; dy = 1; break;
		}
		//����Ƿ��������ײ
		for (int i = 1; i < snake.size; i++)
		{
			if (snake.body[0].X == snake.body[i].X && snake.body[0].Y == snake.body[i].Y)
				return;
		}

		//�ߺ�ʳ�����ײ
		if (snake.body[0].X == food[0] && snake.body[0].Y == food[1])
		{
			//�����ʳ��
			Initfood();
			//�ߵ���������
			snake.size++;
			//��������
			score += 10;
			//�ؿ����ٶȣ��ϰ���
		}

		//�߸�������
		lx = snake.body[snake.size - 1].X;
		ly = snake.body[snake.size - 1].Y;
		for (int i = snake.size-1; i > 0; i--)
		{
			snake.body[i].X = snake.body[i - 1].X;
			snake.body[i].Y = snake.body[i - 1].Y;
		}
		//������ͷ
		snake.body[0].X += dx;
		snake.body[0].Y += dy;

		Sleep(100);
		//system("cls");
	}
}

void Initwall()
{
	for (int i = 0; i <= WIDTH; i++)
	{
		for (int j = 0; j <= LENGTH; j++)
		{
			if (i == WIDTH)
				putchar('=');
			else if (j == LENGTH)
				putchar('=');
			else
				putchar(' ');
		}
		putchar('\n');
	}
}

int main()
{
	srand((size_t)time(NULL));

	//ȥ������̨���
	CONSOLE_CURSOR_INFO cci;
	cci.dwSize = sizeof(cci);
	cci.bVisible = FALSE;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cci);

	Initwall();
	Initfood();
	Initsnake();
	PlayGame();
	
	
	return 0;
}