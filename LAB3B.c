#include "stdio.h"
#include "conio.h"
#define N 5
struct student
{
   char num[6];
   char sex[8];
   char name[8];
   int score[4];
}stu[N];

void input()
{
   int i,j;
   for(i=0;i<N;i++)
   {
       	printf("\n please input %d of %d\n",i+1,N);
	printf("num: ");
 	scanf("%s",&stu[i].num);
 	printf("sex: ");
 	scanf("%s",&stu[i].sex);
 	printf("name: ");
	scanf("%s",&stu[i].name);
	for(j=0;j<3;j++)
       {
           printf("score %d.",j+1);
	   scanf("%d",&stu[i].score[j]);
	}
       printf("\n");
    }
}

void print()
{
    int i,j;
    printf("\nNo. Name  sex Sco1 Sco2 Sco3\n");
    for(i=0;i<N;i++)
    {
       printf("%-6s%-4s%-10s",stu[i].num,stu[i].sex,stu[i].name);
       for(j=0;j<3;j++)
           printf("%-8d",stu[i].score[j]);
       printf("\n");
    }
}

main()
{
    input();
    print();

    getch();
}
