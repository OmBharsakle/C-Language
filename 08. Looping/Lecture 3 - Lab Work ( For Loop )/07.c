// 7. WAP To Find leap Year From 2000 to 3000 Using For Loop.

#include<stdio.h>

int main()
{
	int i;
	int c=0;
	
	for(i=2000; i<=3000; i+=4)
	{
		printf("%d ",i);
		c++;	
	}
	
	printf("\nTotal Leap Year Is %d ",c);
}
