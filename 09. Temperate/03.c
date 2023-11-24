//3. Write C Program To Count Number Of Digits In a Number.
#include<stdio.h>
main()
{
	int n;
	int i;
	
	printf("Enter The Number : ");
	scanf("%d",&n);
	
	for(i=1; 9<n; i++)
	{
		n = n/10;
	}
	
	printf("%d",i);
	
}
