#include<stdio.h>
main()
{
	int i,j,f=1;
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
				f++;
				a[j]=0;
			}
		}
		if(a[i]!=0)
		{
			printf("%d -> %d\n",a[i],f);
			f=1;
		}	
		
	}
}

