#define _CRT_SECURE_NO_WARNINGS 1
#define WIDTH 20
#define LENGTH 60

struct BODY
{
	int X;
	int Y;
};

struct SNAKE
{
	int size;
	struct BODY body[WIDTH * LENGTH];
}snake;

int food[2];//food[0]为X坐标，food[1]为Y坐标

int score = 0;
//偏移坐标
int dx = 0;
int dy = 0;

//记录蛇末尾坐标
int lx = 0;
int ly = 0;

void Initfood();
void Initsnake();
void showUI();
void PlayGame();
void Initwall();