//8.Write A Program In C To Count The Total Number Of Duplicate Elements In Sn Array.
#include<stdio.h>
main()
{
	int i,n,j,count=0;
	
	printf("Enter The Value Of Array Size : ");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0; i<n; i++)
	{
		printf("Enter The Value Of Array a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	
	for(i=0; i<=n; i++)
	{
		for(j=i+1 ; j<=n; j++)
		{
			if(a[i]==a[j])
			{
				count++;
//				printf("a[%d] = %d , a[%d] = %d \n",i,a[i],j,a[j]);
			}
		}
	}
	printf("Total Number Of Duplicate Elements Found In The Array: %d\n",count);
	
}
