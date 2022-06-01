/*      ****************************************************************************************************     */
/*      上机作业：（lab8）   链式存储结构下队列的基本操作                                                        */
/*      ****************************************************************************************************     */
/*                                                                                                               */
/*  利用自编的子程序实现以下功能：                                                                               */
/*  ①创建一个空队列；                                                                                            */
/*  ②判断新建的队列是否为空；                                                                                    */
/*  ③提示用户输入"队列的长度"；                                                                                  */
/*  ④根据用户输入的"队列的长度"，逐一提示用户输入"队列中的各个元素"，完成队列的构造；                            */
/*  ⑤判断此时的队列是否为空；                                                                                    */
/*  ⑥调用子程序打印当前队列的队首元素和队尾元素；                                                                */
/*  ⑦编写打印队列元素的子程序PrintNode( )；                                                                      */
/*  ⑧清空队列，连续3次做下列操作：入队4个元素，出队2个元素，打印队列，打印当前队列的队首元素和队尾元素；         */
/*  ⑨要求：提供尽可能友好的人机对话界面，便于用户（非程序设计者）使用。                                          */
/*      ****************************************************************************************************     */
#include<windows.h>
#include "stdio.h"
#include "lab8.h"
int main()
{     
    int i,j,x,y,length;             
    //给头结点申请内存
    struct LINK_QUEUE *Queue= (struct LINK_QUEUE*)malloc(sizeof(struct LINK_QUEUE));
    if(!Queue) //检测是否申请失败
    {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
        printf("Queue malloc error!\n");
        return 0;
    }
    InitQueue(Queue);
	if(IsEmpty(Queue))
        printf("\nQueue Empty\n\n");
	else
		printf("Queue Not Empty\n\n");
	//③提示用户输入"循环队列的长度"；                                                                              
    printf("The length of queue is : ");
    scanf("%d",&length);
	//④根据用户输入的"循环队列的长度"，逐一提示用户输入"循环队列中的各个元素"，完成循环队列的构造;
    for(i=0;i<length;i++)
    {
        printf("Enter the %dth Queue :",i+1);
        scanf("%d",&x);
        Add(Queue,x);
    }
	//⑤判断此时的队列是否为空;
	if(IsEmpty(Queue))
        printf("\nQueue Empty\n");
	else
		printf("\nQueue Not Empty\n");
	//⑥调用子程序打印当前队列的队首元素和队尾元素；
    GetFront(Queue,&y);
    printf("\nFront : %d\n",y);
    GetRear(Queue,&y);
    printf("Rear  : %d\n",y);

    PrintNode(Queue);
	//⑧清空队列，连续3次做下列操作：入队4个元素，出队2个元素，打印队列，打印当前队列的队首元素和队尾元素；
    Clear(Queue);
    for(j=0;j<3;j++)
    {
		for(i=0;i<4;i++)
		{   
			printf("Enter the %dth Queue :",i+1);
			scanf("%d",&x);
			if(Queue->Length==length)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
				printf("\nThe Queue has full and new data connot be inserted!\n\n");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
				break;
			}
			Add(Queue,x);
		}
		for(i=0;i<2;i++)
		{  
			Del(Queue);
		}
		PrintNode(Queue);
		GetFront(Queue,&y);
		printf("\nFrond : %d\n",y);
		GetRear(Queue,&y);
		printf("Rear  : %d\n",y);
    }
    free(Queue);
    return 0;
}