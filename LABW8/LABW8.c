/*      ****************************************************************************************************     */
/*      �ϻ���ҵ����lab8��   ��ʽ�洢�ṹ�¶��еĻ�������                                                        */
/*      ****************************************************************************************************     */
/*                                                                                                               */
/*  �����Ա���ӳ���ʵ�����¹��ܣ�                                                                               */
/*  �ٴ���һ���ն��У�                                                                                            */
/*  ���ж��½��Ķ����Ƿ�Ϊ�գ�                                                                                    */
/*  ����ʾ�û�����"���еĳ���"��                                                                                  */
/*  �ܸ����û������"���еĳ���"����һ��ʾ�û�����"�����еĸ���Ԫ��"����ɶ��еĹ��죻                            */
/*  ���жϴ�ʱ�Ķ����Ƿ�Ϊ�գ�                                                                                    */
/*  �޵����ӳ����ӡ��ǰ���еĶ���Ԫ�غͶ�βԪ�أ�                                                                */
/*  �߱�д��ӡ����Ԫ�ص��ӳ���PrintNode( )��                                                                      */
/*  ����ն��У�����3�������в��������4��Ԫ�أ�����2��Ԫ�أ���ӡ���У���ӡ��ǰ���еĶ���Ԫ�غͶ�βԪ�أ�         */
/*  ��Ҫ���ṩ�������Ѻõ��˻��Ի����棬�����û����ǳ�������ߣ�ʹ�á�                                          */
/*      ****************************************************************************************************     */
#include<windows.h>
#include "stdio.h"
#include "lab8.h"
int main()
{     
    int i,j,x,y,length;             
    //��ͷ��������ڴ�
    struct LINK_QUEUE *Queue= (struct LINK_QUEUE*)malloc(sizeof(struct LINK_QUEUE));
    if(!Queue) //����Ƿ�����ʧ��
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
	//����ʾ�û�����"ѭ�����еĳ���"��                                                                              
    printf("The length of queue is : ");
    scanf("%d",&length);
	//�ܸ����û������"ѭ�����еĳ���"����һ��ʾ�û�����"ѭ�������еĸ���Ԫ��"�����ѭ�����еĹ���;
    for(i=0;i<length;i++)
    {
        printf("Enter the %dth Queue :",i+1);
        scanf("%d",&x);
        Add(Queue,x);
    }
	//���жϴ�ʱ�Ķ����Ƿ�Ϊ��;
	if(IsEmpty(Queue))
        printf("\nQueue Empty\n");
	else
		printf("\nQueue Not Empty\n");
	//�޵����ӳ����ӡ��ǰ���еĶ���Ԫ�غͶ�βԪ�أ�
    GetFront(Queue,&y);
    printf("\nFront : %d\n",y);
    GetRear(Queue,&y);
    printf("Rear  : %d\n",y);

    PrintNode(Queue);
	//����ն��У�����3�������в��������4��Ԫ�أ�����2��Ԫ�أ���ӡ���У���ӡ��ǰ���еĶ���Ԫ�غͶ�βԪ�أ�
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