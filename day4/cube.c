#include<stdio.h>
void main()
{
	int n,i;
	printf("enter the number");
	scanf("%d",&n);
	printf("cube of number from 1 to %d\n",n);
	for( i=1; i<=n; i++)
	{
		printf("cube of %d = %d\n",i,i*i*i);
	}
	
}
	

