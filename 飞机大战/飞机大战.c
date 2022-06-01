#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <conio.h>

int x1[10] = { 0 }, y2[10] = { 0 };
int a[10][3] = { 0 };
int su = 0, q = 0, w = 0, e = 7, k = 3;
int s[8][5] = { 0 };
int t[8] = { 0 };
int xz, yz;
int f = 0;

int gotoxy(int x, int y)
{
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	return 0;
}

int color(int c)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
	return 0;
}

int woji(int x, int y)
{
	color(15);
	gotoxy(x, y);
	printf("A");
	gotoxy(x - 1, y + 1);
	printf("<=>");
	return 0;
}

int qincu(int x, int y)
{
	color(0);
	gotoxy(x - 1, y);
	printf("###");
	gotoxy(x - 1, y + 1);
	printf("###");
	return 0;
}

int zhidan(int x, int y)
{
	color(5);
	gotoxy(x, y);
	printf("*");
	return 0;
}


void jzpd(int x, int y)
{
	if (x == xz && y == yz)
	{
		int n;
		if (k != 0)
		{
			k--;
			//return 0;
		}
		system("cls");
		jiemian();
		color(7);
		gotoxy(3, 3);
		printf("分数:");
		gotoxy(4, 4);
		printf("%d", f);
		color(4);
		gotoxy(3, 5);
		printf("是否结束？");
		gotoxy(3, 6);
		printf("1 结束");
		printf("选择_\b");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			exit(0);
			break;
		}
	}
}

void djqc(int x, int y)
{
	color(0);
	gotoxy(x - 1, y);
	printf("###");
	gotoxy(x - 1, y - 1);
	printf("###");
}

void jizpd(int d, int x, int y)
{
	int i;
	for (i = 0; i < 8; i++)
	{
		if ((((s[i][1] + 1) == x) && ((s[i][2] + 1) == y)) || ((s[i][1] == x) && (s[i][2] == y)) || ((s[i][1] + 2) == x && (s[i][2] == y)))
		{
			djqc(s[i][1] + 1, s[i][2] + 1);
			f += 5;
			a[d][0] = 0;
			s[i][0] = 0;
			s[i][1] = 0;
			s[i][2] = 0;
			s[i][3] = 0;
			s[i][4] = 0;
			if (e == 0)
			{
				q = 0;
				w = 0;
				e = 7;
			}
			e--;
		}
	}
}

void zhidanqianjin()
{
	int i;
	for (i = 0; i < 10; i++)
	{
		if (a[i][0] == 1)
		{
			if (x1[i] > 0)
			{
				if (y2[i] >= 2)
				{
					color(0);
					gotoxy(x1[i], y2[i]);
					printf("*");
					y2[i] -= 1;
					zhidan(x1[i], y2[i]);
					jizpd(i, x1[i], y2[i]);
					color(6);
					gotoxy(35, 2);
					printf("%d", f);
				}
				else
				{
					color(0);
					gotoxy(x1[i], 1);
					printf("*");
					a[i][0] = 0;
					x1[i] = 0, y2[i] = 0;
				}
			}
		}
	}

	for (i = 0; i < 8; i++)
	{
		if (s[i][0] == 1)
		{
			if (s[i][4] <= 18)
			{
				color(0);
				gotoxy(s[i][3], s[i][4]);
				printf("*");
				s[i][4] += 1;
				zhidan(s[i][3], s[i][4]);
				jzpd(s[i][3], s[i][4]);

			}
			else
			{
				color(0);
				gotoxy(s[i][3], 19);
				printf("*");
			}
		}
	}
}

void HideCursor()
{
	CONSOLE_CURSOR_INFO cursor_info = { 1,0 };
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
	return;
}

void diji(int x, int y)
{

	color(4);
	gotoxy(x, y);
	printf("<=>");
	gotoxy(x + 1, y + 1);
	printf("V");
	return;
}

int Time()
{
	int n;
	srand(time(NULL));
	n = rand();
	return n;
}

int kaishi()
{
	int ch = 1;
	int x = 14, y = 16,X,Y;
	while (1)
	{
		woji(x, y);
		gotoxy(x, y + 1);
		if (_kbhit())
		{
			ch = _getch();
			if (ch == 77)
			{
				qincu(x, y);
				x += 1;
				if (x == 29)
				{
					x -= 1;
				}
			}
			if (ch == 72)
			{
				qincu(x, y);
				y -= 1;
				if (y == 0)
				{
					y += 1;
				}
			}
			if (ch == 80)
			{
				qincu(x, y);
				y += 1;
				if (y == 19)
				{
					y -= 1;
				}
			}
			if (ch == 75)
			{
				qincu(x, y);
				x -= 1;
				if (x == 1)
				{
					x += 1;
				}
			}
			if (ch == 32)
			{
				if (su < 10)
				{
					a[su][0] = 1;
					a[su][1] = x;
					a[su][2] = (y - 1);
					x1[su] = x;
					y2[su] = (y - 1);
					zhidan(x, y - 1);
					su++;
				}
				else {
					su = 0;
					a[su][0] = 1;
					a[su][1] = x;
					a[su][2] = (y - 1);
					x1[su] = x;
					y2[su] = (y - 1);
					zhidan(x, y - 1);
					su++;
				}

			}
		}
		else
		{
			if (q < 8)
			{
				if ((rand() % 100) <= 2)
				{
					q++;
					X = rand() % 26 + 1;
					Y = rand() % 6 + 1;
					diji(X, Y);
					s[w][0] = 1;
					s[w][1] = X;
					s[w][2] = Y;
					s[w][3] = X + 1;
					s[w][4] = Y + 2;
					zhidan(X + 1, Y + 2);
					t[w] = Y + 2;
					w++;
				}
			}
			xz = x, yz = y;
			Sleep(50);
			zhidanqianjin();
		}
	}
	return 0;
}

int youxijiemian()
{
	int i, j;
	for (i = 0; i <= 30; i++)
	{
		for (j = 0; j <= 20; j++)
		{
			if (i == 0 || i == 30)
			{
				gotoxy(i, j);
				printf("|");
			}
			else if (j == 0 || j == 20)
			{
				gotoxy(i, j);
				printf("=");
			}
		}
	}
	for (i = 33; i <= 43; i++)
	{
		for (j = 0; j <= 5; j++)
		{
			if (i == 33 || i == 43)
			{
				gotoxy(i, j);
				printf("|");
			}
			else if (j == 0 || j == 5)
			{
				gotoxy(i, j);
				printf("=");
			}
		}
	}
	color(4);
	gotoxy(36, 1);
	printf("分数");
	return 0;
}

int jiemian()
{
	int i, j;
	for (i = 0; i <= 20; i++)
	{
		for (j = 0; j <= 10; j++)
		{
			if (i == 0 || i == 20)
			{
				gotoxy(i, j);
				printf("|");
			}
			else if (j == 0 || j == 10)
			{
				gotoxy(i, j);
				printf("=");
			}
		}
	}
	return 0;
}
int tuicu()
{
	exit(0);
	return 0;
}
int shuoming()
{
	int n;
	jiemian();
	color(4);
	gotoxy(5, 1);
	printf("说明界面");
	color(5);
	gotoxy(2, 3);
	printf("W :控制飞机向上");
	color(6);
	gotoxy(2, 4);
	printf("A D :控制飞机方向");
	color(7);
	gotoxy(2, 5);
	printf("S :控制飞机向下");
	color(8);
	gotoxy(2, 6);
	printf("空格 :发射子弹");
	color(9);
	gotoxy(2, 7);
	printf("ESC :退出游戏");
	color(10);
	gotoxy(2, 8);
	printf("退出 1");
	color(11);
	gotoxy(2, 9);
	printf("返回 2: [ ]\b\b");
	color(12);
	scanf("%d", &n);
	switch (n)
	{
	case 1:
		tuicu();
		break;
	case 2:
		system("cls");
		kaishijiemian();
		break;
	}
	return 0;
}
int kaishijiemian()
{
	int n;
	jiemian();
	color(14);
	gotoxy(4, 1);
	printf("飞机大战");
	color(12);
	gotoxy(2, 2);
	printf("作者: 古月流波");
	color(4);
	gotoxy(2, 4);
	printf("1:开始 2:说明");
	gotoxy(2, 6);
	printf("3:退出");
	color(5);
	gotoxy(2, 8);
	printf("请选择[1 2 3]:[ ]\b\b");
	scanf("%d", &n);
	switch (n)
	{
	case 1:
		system("cls");
		youxijiemian();
		kaishi();
		break;
	case 2:
		system("cls");
		shuoming();
		break;
	case 3:
		tuicu();
		break;
	}
	return 0;
}
int main()
{
	HideCursor();
	kaishijiemian();
	return 0;
}