#include<stdio.h>
void main()
{
	char source[20]="shubhangi",destination[20];
	int i;
	for(i=0;source[i]!='\0';i++)
	{
		destination[i]=source[i];
	}
	printf("%s",destination);
}
