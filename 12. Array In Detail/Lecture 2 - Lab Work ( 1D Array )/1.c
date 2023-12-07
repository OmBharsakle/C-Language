//1.Write A Program To Perform The Merge Operation Of Two 1D Arrays & Store It In Another Array. Keep In Mind That Both Array Sizes Can Be Different.
#include<stdio.h>
main()
{
	int a[5];
	int b[3];
	int c[8];
	int i,j=0;
	
	for(i=0; i<5; i++)
	{
		printf("Enter The Value Of a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n");
	
	for(i=0; i<3; i++)
	{
		printf("Enter The Value Of b[%d] : ",i);
		scanf("%d",&b[i]);
	}
	
	for(i=0; i<5; i++)
	{
		c[i] = a[i];
	}
	
	for(i=5; i<8; i++)
	{
		
		c[i] = b[j];
		j++;
		
	}
	
	printf("\n");
	
	for(i=0; i<8; i++)
	{
		printf("%d",c[i]);
	}
	
	
}

