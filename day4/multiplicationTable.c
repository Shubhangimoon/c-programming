#include<stdio.h>
void main()
{
	int num;
	printf("enter the number");
	scanf("%d",&num);
	for(int i = 1;i<=10;i++)
	{
		int mul = num*i;
		printf("\n %d * %d = %d" ,num,i,mul);
	}
}
