//9. Wap To Find Sum Of Even Number Between 1 to 28.
#include<stdio.h>
main()
{
	int i,sum=0;
	
	for(i=1; i<=28; i++)
	{
		if(i%2==0)
		{
			printf("%d ",i);
			sum = sum+i;	
		}	
	}	
	
	printf("\n%d",sum);
}
