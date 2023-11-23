//1. WAP To Demonstrate The Use Of Break Keywords.
#include<stdio.h>
main()
{
	int i,n;
	
	printf("Enter Any Number ( 1 To 10 ) : ");
	scanf("%d",&n);
	
	for(i=1; i<=10; i++)
	{
		printf("%d ",i);
		
		if(i==n)
		{
			break;
		}
	}
	
}
