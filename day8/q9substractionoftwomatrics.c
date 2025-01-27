#include<stdio.h>
int main()
{
	int A[2][2]={{2,2},{3,3}},B[2][2]={{2,2},{4,4}},C[2][2],i,j;
	printf("enter element of an array");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			C[i][j]=A[i][j]-B[i][j];
		}
	}

printf("substact of matrics\n");
for(i=0;i<2;i++)
{
  	for(j=0;j<2;j++)
  	{
  		printf("%d\t",C[i][j]);
    }
    printf("\n");
}
}
