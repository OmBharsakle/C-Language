//6. Write A Program In C To Find A Pair Of Target Value Given By User.
#include<stdio.h>
main() 
{
    int n,i,j,target;
    
    printf("Enter The Size Of Array : ");
    scanf("%d",&n);
    
    printf("\n");
    
    int a[n];
    
    for(i = 0; i < n; i++) {
        printf("Enter The Value a[%d] = ", i);
        scanf("%d",&a[i]);
    }
    
    printf("\nEnter The Target Value : ");
    scanf("%d", &target);
    
    printf("\n");
    
    for(i=0; i<n; i++) 
	{
        for(j=i+1; j<n; j++) 
		{
            if(a[i] + a[j] == target) 
			{
                printf("Pair Of Target Value : %d + %d = %d\n", a[i],a[j],target);
            }
        }
    }
}

