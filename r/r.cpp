#include<stdio.h>
void main()
{
	int i,j,b[6];
	for(i=1;i<6;i++)
				{
					scanf("%d",&b[i]);

				}
				for(i=1;i<6;i++)
				for(j=1;j<6-i;j++)
				{
					if(b[j]>b[j+1])
					{
						b[0]=b[j];
						b[j]=b[j+1];
						b[j+1]=b[0];

	
					}
				}
			for(i=1;i<6;i++)
				{
					printf("%d ",b[i]);

				}
}

