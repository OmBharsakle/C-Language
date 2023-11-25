//4. Wap To Reverse Number Of Given Number.
#include<stdio.h>
main()
{
	int a,b,n,ld;
	
	printf("Enter The Any Number : ");
	scanf("%d",&n);
	
	for(a=1; 0<n; a++)
	{
		ld=n%10;
		printf("%d",ld);
		n = n/10;	
	}
	
//	while(n>0)
//	{
//		ld=n%10;
//		printf("%d",ld);
//		n = n/10;	
//	}

	
}
