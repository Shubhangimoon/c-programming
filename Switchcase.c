#include<stdio.h>
void main()
{
	int Day_Number;
	printf("Enter 1,2,3,4,5,6 OR 7");
	scanf("%d",&Day_Number);
	switch(Day_Number){
		case 1:
		 printf("Sunday");
		 break;
		case 2:
		 printf("Monday");
		 break;
		case 3:
		 printf("Tusday");
		 break;
		case 4:
		 printf("Wednesday");
		 break;
		case 5:
		 printf("Thursday");
		 break;
		case 6:
		 printf("Friday");
		 break;
		case 7:
		 printf("Saturday");
		 break;
		Default:
		printf("Invalid break,choice");
		
	}
		
	
}

