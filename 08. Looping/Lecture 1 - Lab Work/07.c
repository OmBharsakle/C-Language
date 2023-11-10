// 7. WAP To Find leap Year From 2000 to 3000 Using While Loop.

#include<stdio.h>

int main()
{
	int x = 2000;
	int c=0;
	
	while(x<=3000)
	{
		printf("%d ",x);
		x+=4;
		c++;
	}
	
	printf("\nTotal Leap Year Is %d ",c);
}
