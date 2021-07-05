#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "Snake.h"
#include <Windows.h>
#include <conio.h>

/*
1.定义蛇的结构体
2.初始化蛇和食物
3.开始游戏
	蛇和墙的碰撞
	蛇和自身的碰撞
	蛇和食物的碰撞
		重新随机食物
		蛇的身体增长
		分数增长
	方向键控制
4.游戏结束
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
	//更新末尾空格
	coord.X = lx;
	coord.Y = ly;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	putchar(' ');
	//显示蛇的位置
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
	//显示食物的位置
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
		//显示界面
		showUI();
		//方向控制
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
		//检查是否和自身碰撞
		for (int i = 1; i < snake.size; i++)
		{
			if (snake.body[0].X == snake.body[i].X && snake.body[0].Y == snake.body[i].Y)
				return;
		}

		//蛇和食物的碰撞
		if (snake.body[0].X == food[0] && snake.body[0].Y == food[1])
		{
			//随机新食物
			Initfood();
			//蛇的身体增长
			snake.size++;
			//分数增长
			score += 10;
			//关卡，速度，障碍物
		}

		//蛇更新坐标
		lx = snake.body[snake.size - 1].X;
		ly = snake.body[snake.size - 1].Y;
		for (int i = snake.size-1; i > 0; i--)
		{
			snake.body[i].X = snake.body[i - 1].X;
			snake.body[i].Y = snake.body[i - 1].Y;
		}
		//更新蛇头
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

	//去掉控制台光标
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