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

int food[2];//food[0]ΪX���꣬food[1]ΪY����

int score = 0;
//ƫ������
int dx = 0;
int dy = 0;

//��¼��ĩβ����
int lx = 0;
int ly = 0;

void Initfood();
void Initsnake();
void showUI();
void PlayGame();
void Initwall();