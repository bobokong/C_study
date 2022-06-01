#include<stdio.h>
main()
{
	int i,j,s1,s2,n;
	printf("Please enter the upper limit of the selected range: ");
	scanf("%d",&n);
	printf("There are following friendly-number pair smaller than n\n");
	for(i=2;i<=n;i++) {
	s1=0;
	for(j=1;j<=i/2;j++)
	if(i%j==0)
	s1+=j;
	for(j=1;j<=s1/2;j++)
	if(s1%j==0)
	s2+=j;
	if(i==s2)
	printf("%d--%d",i,s2);
	}
}