#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#define Map_list 6
#define Map_line 6
void map_printf(int x,int y,int b[][Map_list])
{
	int i,j;
	for(i=0;i<Map_line;i++)
	{
		for (j=0;j<Map_list;j++)
		{
			if(b[i][j]==10||b[i][j]==11)
			printf("¨~");
			if(b[i][j]==12)
			printf("À×");
			else if(b[i][j]==0)
			printf(" ");
			else if(b[i][j]==13)
			printf("¡õ");
			else if(b[i][j]>0&&b[i][j]<9)
			printf(" %d",b[i][j]);
		}
		printf("\n");
	}
}
void Move(int x,int y)
{
	HANDLE hOut=GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos= {x, y};
	SetConsoleCursorPosition(hOut, pos);
}
int kb_cursor()
{
	int a=getch();
	char input[2];
	if(a<0)
	{
		input[0]=a;
		input[1]=getch();
	}
	else
	{
		input[1]=a;
	}
	return input[1];
}
void HideCursor()
{
	CONSOLE_CURSOR_INFO cursor_info = {1, 0};
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info); }
void printf_0(int b[][Map_list],int x,int y)
{
	int i,j,n;
	if(x==0&&y==0)
	{
		n=0;
		for(i=0;i<2;i++)
		for(j=0;j<2;j++)
		if(b[x+i][y+j]==11)
		n++;
		if(n==0)
		{
		for(i=0;i<2;i++)
			for(j=0;j<2;j++)
			{
				if(b[x+i][x+j]==10)
				{
					b[x+i][y+j]=0;
					printf_0(b,x+i,y+j);
				}
			}
		}
		else b[x][y]=n;
	}
	else if(x==0&&y<Map_list-1&&y>0)
	{
		n=0;
		for(i=0;i<2;i++)
			for(j=-1;j<2;j++)
				if(b[x+i][y+j]==11)
					n++;
		if(n!=0)
			b[x][y]=n;
		else
			for(i=0;i<2;i++)
				for(j=-1;j<2;j++)
				{
					if(b[x+i][y+j]==10)
					{
						b[x+i][y+j]=0;
						printf_0(b,x+i,y+j);
					}
				}
	}
	else if(x==0&&y==Map_list-1)
	{
		n=0;
		for(i=0;i<2;i++)
			for(j=-1;j<1;j++)
				if(b[x+i][y+j]==11)
					n++;
		if(n!=0)
			b[x][y]=n;
		else
			for(i=0;i<2;i++)
				for(j=-1;j<1;j++)
				{
					if(b[x+i][y+j]==10)
					{
						b[x+i][y+j]=0;
						printf_0(b,x+i,y+j);
					}
				}
	}
	else if(y==Map_list-1&&x!=0&&x!=Map_line-1) 
	{
		n=0;
		for(i=-1;i<2;i++)
			for(j=-1;j<1;j++)
				if(b[x+i][y+j]==11)
					n++;
		if(n!=0)
			b[x][y]=n;
		else
			for(i=-1;i<2;i++)
		for(j=-1;j<1;j++)
		{
			if(b[x+i][y+j]==10)
			{
				b[x+i][y+j]=0;
				printf_0(b,x+i,y+j);
			}
		}
	}
	else if(y==Map_list-1&&x==Map_line-1)
	{
		n=0;
		for(i=-1;i<1;i++)
			for(j=-1;j<1;j++)
				if(b[x+i][y+j]==11)
					n++;
				if(n!=0)
					b[x][y]=n;
				else
					for(i=-1;i<1;i++)
					for(j=-1;j<1;j++)
					{
						if(b[x+i][y+j]==10)
						{
							b[x+i][y+j]=0;
							printf_0(b,x+i,y+j);
						}
					}
	}
	else if(x==Map_line-1&&y>0&&y<Map_list-1) 
	{
		n=0;
		for(i=-1;i<1;i++)
			for(j=-1;j<2;j++)
				if(b[x+i][y+j]==11)
					n++;
		if(n!=0)
			b[x][y]=n;
		else
			for(i=-1;i<1;i++)
				for(j=-1;j<2;j++)
				{
					if(b[x+i][y+j]==10)
					{
						b[x+i][y+j]=0;
						printf_0(b,x+i,y+j);
					}
				}
	}
	else if(x==Map_line-1&&y==0)
	{
		n=0;
		for(i=-1;i<1;i++)
			for(j=0;j<2;j++)
				if(b[x+i][y+j]==11)
					n++;
		if(n!=0)
			b[x][y]=n;	
		else
			for(i=-1;i<1;i++)
				for(j=0;j<2;j++)
				{
					if(b[x+i][y+j]==11)
					{
						b[x+i][y+j]=0;
						printf_0(b,x+i,y+j);
					}
				}
	}
	else if(x>0&&x<Map_line-1&&y==0) 
	{
		n=0;
		for(i=-1;i<2;i++)
			for(j=0;j<2;j++)
				if(b[x+i][y+j]==11)	
					n++;
		if(n!=0)
			b[x][y]=n;
		else
			for(i=-1;i<2;i++)
				for(j=0;j<2;j++)
				{
					if(b[x+i][y+j]==10)
					{
						b[x+i][y+j]=0;
						printf_0(b,x+i,y+j);
					}
				}
	}
	else
	{
		n=0;
		for(i=-1;i<2;i++)
			for(j=-1;j<2;j++)
				if(b[x+i][y+j]==11)
					n++;
		if(n!=0)
			b[x][y]=n;
		else
			for(i=-1;i<2;i++)
				for(j=-1;j<2;j++)
				{
					if(b[x+i][y+j]==10)
					{
						b[x+i][y+j]=0;
						printf_0(b,x+i,y+j);
					}
				}
	}
}
void main()
{
	int kb,x=0,y=0;
	int old_value;
	int end;
	int a[Map_line][Map_list]=
	{
		{10,10,10,10,10,10},
		{10,10,11,10,11,10},
		{11,10,10,10,10,10},
		{10,10,10,11,10,10},
		{10,10,10,10,10,10},
		{10,10,10,10,10,10}
	};
	HideCursor();
	old_value=a[0][0];
	while (1)
	{
		map_printf(Map_line,Map_list,a);
		kb=kb_cursor();
		switch(kb)
		{
			case 's':if(x<5)
			{
				a[x][y]=old_value;
				x++;
				old_value=a[x][y];
				a[x][y]=13; 
			}	
			break;
			case 'w':if(x>0)
			{
				a[x][y]=old_value;
				x--;
				old_value=a[x][y];
				a[x][y]=13;
			}
			break;
			case 'd':if(y<5)
			{
				a[x][y]=old_value;
				y++;
				old_value=a[x][y];
				a[x][y]=13;
			}
			break;
			case 'a':if(y>0)
			{
				a[x][y]=old_value;
				y--;
				old_value=a[x][y];
				a[x][y]=13;
			}
			break;
			case 13:
				if(old_value==10)
				{
					a[x][y]=0;
					printf_0(a,x,y);
					old_value=a[x][y];
				}
			if(old_value==11)
			{
				a[x][y]=12;
				end=-1;
			}
			break;
	}
	system("cls");
	if(end==-1)
	{
		map_printf(Map_line,Map_list,a);
		printf("Äã²ÈÀ×ÁË\n");
		break;
	}
}