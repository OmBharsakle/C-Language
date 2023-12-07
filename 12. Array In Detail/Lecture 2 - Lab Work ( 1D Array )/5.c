//5. Wap To Find Minimum From The 1d Array.
#include<stdio.h>
main()
{
	int n,i;
	
	printf("Enter The Array Size : ");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0; i<n; i++)
	{
		printf("Enter The Value Of a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	int min=a[0];
	
	for(i=0; i<n; i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}
	}
	
	printf("Array Min Value Is : %d",min);
}
