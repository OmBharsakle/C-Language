//2. WAP To Demonstrate The Use Of Continue Keyword.
#include<stdio.h>
main()
{
	int i,n;
	
	printf("What Number Do You Want To Come Out? ( 1 To 10 ) : ");
	scanf("%d",&n);
	
	for(i=1; i<=10; i++)
	{	
		if(i==n)
		{
			continue;
		}
		printf("%d ",i);
	}
	
}
