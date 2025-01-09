#include<stdio.h>
void main()
{
	int a,b,c,d;
	a='x';
	b='m';
	c='l';
  d=a;
  a=c;
  c=d;
  printf("%c%c%c",a,b,c);
}
