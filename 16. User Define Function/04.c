//Q.4 Write A Program To Find The Length Of The String By Passing A String As An Argument Using UDF.
#include<stdio.h>
void lenght(char n[])
{
	printf("Enter Your String : ");
	gets(n);
	
	printf("Your String Lenght Is : %d",strlen(n));
}
main()
{
	char n[100];
	lenght(n);
}

