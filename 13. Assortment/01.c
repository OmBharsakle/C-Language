//1. WAP To Get The Array And Count & Remove All Duplicate Values In The Array.
#include<stdio.h>
main()
{
	int i,j;
	int a[10];
	
	for(i=0; i<10; i++)
	{
		printf("Enter Your Array a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<10; i++)
	{
		for(j=i+1; j<10; j++)
		{
			if(a[i]==a[j])
			{
				a[j]=0;
			}
		}
		if(a[i]!=0)
		{
			printf("%d ",a[i]);
		}	
		
	}
}

