#include<stdio.h>
void main()
{
	int i,num,sum=0,average;
	for(i=1;i<=10;i++)
	{
	printf("enter the value of num");
	scanf("%d",&num);
	   if(i<=10){
	   
		printf("%d\n",i);
		sum=sum+i;
	}
    }
    printf("%d",sum);
    average = sum / 10;
    printf("average = ",average);
}
