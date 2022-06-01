#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<conio.h>
void gotoxy(int x,int y) //移动坐标
{
    COORD coord;
    coord.X=y;
    coord.Y=x;
    SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), coord );
}
void hidden_cursor()		//隐藏光标
{
  HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
  CONSOLE_CURSOR_INFO cci;
  GetConsoleCursorInfo(hOut,&cci);
  cci.bVisible=0;		//赋1为显示，赋0为隐藏
  SetConsoleCursorInfo(hOut,&cci);
}
int color(int c)
{
	
	if(c==0) c=7;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
	return 0;
}/*
void init_interface()
{   
	int t=2000,x=0,y=0,i,j;
	for(x;x<N;x++)
		for(y;y<N;y++)
		{
			
			color(dry[x][y]);
			printf("■");
		}

}


	while(--t)
        {   if(kbhit()!=0)//有输入就跳出否则将在等待2s后刷新界面
                break;  
        }



*/


void start()
{
	
	int t=200000,x,y,n;
	for(x=0;x<100;x++)          
		for(y=0;y<100;y++)                                                     
		{                   
			gotoxy(x,2*y);  
			n=y/10+2*x;    
			color(n);     
			printf("■");  
		}
	
;

}
void main()
{
	system("mode con cols=200 lines=104");
	int i,n;
	for(i=0;i<10;i++)
	{
//	n=(rand()%3+1)%3-1;
		//start();
	//	printf("%d ",n);
		//getchar();
		//system("cls");
		//system("color 7");
		color(i); 
printf("■");
	}

}
/*void gotoxy(int x,int y) //移动坐标
{
    COORD coord;
    coord.X=y;
    coord.Y=x;
    SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), coord );
}*/
