//4. Wap To Find Maximum From The 1d Array.
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
	
	int max=a[0];
	
	for(i=0; i<n; i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	
	printf("Array Max Value Is : %d",max);
}
