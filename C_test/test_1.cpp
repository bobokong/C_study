#include<stdio.h>
#include<math.h>
#define MAX_LEN 16
struct A
{
	int List[MAX_LEN];
	int n;
};
void Initiate(a)
struct A *a;
{
	a->n=0;
}
void main()
{
	int n,i;
	struct A aa;
	Initiate(&aa);
	printf("The length of List aa is : ");
	scanf("%d",&n);
	printf("Please enter the array:\n");
	for(i=1;i<=n;i++)
	scanf("%d",aa.List[i]);
}
