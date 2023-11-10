//4. Write C program use switch statement. Display Monday to Sunday.
//   Ex. User Input: M
//   Output: Monday

#include<stdio.h>
main()
{
	char c;
	
	printf("Enter The Frist Value Of ( Monday to Sunday ) : ");
	scanf(" %c",&c);
	
	switch(c)
	{
		case 'M' : printf("Monday");
		break;
		case 'T' : printf("Tuesday");
		break;
		case 'W' : printf("Wednesday");
		break;
		case 't' : printf("Thursday");
		break;
		case 'F' : printf("Friday");
		break;
		case 's' : printf("Saturday");
		break;
		case 'S' : printf("Sunday");
		break;
	}
}