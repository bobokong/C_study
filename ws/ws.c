#include<stdio.h>
main()
{
	int i,j,s,n;
	printf("Please enter upper limit of the selected range£º");
	scanf("%d",&n);
	for(i=2;i<=n;i++) {
	s=0;
	for(j=1;j<=i/2;j++)
		if(i%j==0)
		s+=j;
	if(i==s)
	printf("the perfect number is %d\n",i);		
	}
}