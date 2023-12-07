//2.Write A Program To Find Leap Years Between Two Given Numbers And Store Them In An Array. And Then print that array. Make this program in the shortest memory.
#include<stdio.h>

int main()
{
	int i,n,n1;
	int c=0;
	
	printf("Enter The Value Of Start Year : ");
	scanf("%d",&n);
	
	printf("Enter The Value Of Start Year : ");
	scanf("%d",&n1);
	
	for(i=n; i<=n1; i+=4)
	{
		printf("%d ",i);
		c++;	
	}

	printf("\nTotal Leap Year Is %d ",c);
}

