//6. Wap To Acending Order In 1d Array.
#include<stdio.h>
main()
{
	int n,i,j,store;
	
	printf("Enter The Array Size : ");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0; i<n; i++)
	{
		printf("Enter The Value Of a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i]>a[j])
			{
				store=a[i];
				a[i]=a[j];
				a[j]=store;
			}
		}
	}
	
	for(i=0; i<n; i++)
	{
		printf("%d",a[i]);
	 
	}
	
}

