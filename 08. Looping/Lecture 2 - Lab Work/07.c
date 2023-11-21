// 7. WAP To Find leap Year From 2000 to 3000 Using Do While Loop.

#include<stdio.h>

int main()
{
	int x = 2000;
	int c=0;
	
	do
	{
		printf("%d ",x);
		x+=4;
		c++;
		
	}while(x<=3000);
	
	printf("\nTotal Leap Year Is %d ",c);
}