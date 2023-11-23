//5. WAP To Find The Sum Of Prime Numbers Between 1 to 50 Without Using a Loop.

#include<stdio.h>
int main()
{
    int i, count=0, j;
    printf("Prime numbers between 1 to 50 are:\n");
    for(i=1; i<=50; i++)
    {
        for(j=2; j<i; j++)
        {
           if(i%j==0)
           {
               count++;
               break;
           }
        }
        if(count==0 && i!=1)
            printf("%d\n", i);
        count = 0;
    }
    
}

