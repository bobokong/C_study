<<<<<<< HEAD
/*������Խ��ߵ����ֵ��������Խ��ߵ���Сֵ*/
#include "stdio.h"
main()
{
	int a[4][4],i,j,min,max;/*����һ��4*4�ľ���*/
	printf("������Ԫ�ظ�ֵ��\n");
	for(i=0;i<4;i++)
	for(j=0;j<4;j++)
		scanf("%d",&a[i][j]);
		printf("���4*4�ľ���:\n");/*��ӡ���˾���*/
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		printf("%4d",a[i][j]);
		printf("\n");
	}
	max=a[0][0];
	min=a[0][3];
	for(i=0;i<4;i++)
	{
		if(a[i][i]>max) max=a[i][i];
		if(a[i][3-i]<min) min=a[i][3-i];
	}
	printf("min=%d,max=%d\n",min,max);
}
=======
/*������Խ��ߵ����ֵ��������Խ��ߵ���Сֵ*/
#include "stdio.h"
main()
{
	int a[4][4],i,j,min,max;/*����һ��4*4�ľ���*/
	printf("������Ԫ�ظ�ֵ��\n");
	for(i=0;i<4;i++)
	for(j=0;j<4;j++)
		scanf("%d",&a[i][j]);
		printf("���4*4�ľ���:\n");/*��ӡ���˾���*/
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		printf("%4d",a[i][j]);
		printf("\n");
	}
	max=a[0][0];
	min=a[0][3];
	for(i=0;i<4;i++)
	{
		if(a[i][i]>max) max=a[i][i];
		if(a[i][3-i]<min) min=a[i][3-i];
	}
	printf("min=%d,max=%d\n",min,max);
}
>>>>>>> 8dd49b6e5876b6e275555f4a53c4d38f72019bf7
