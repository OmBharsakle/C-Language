//5. Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. 
//   Calculate the percentage and grade according to the following
//   Percentage >= 90% : Grade A
//   Percentage >= 80% : Grade B
//   Percentage >= 70% : Grade C
//   Percentage >= 60% : Grade D 
//   Percentage >= 50% : Grade E
//   Percentage >= 40% : Grade F

#include<stdio.h>
main()
{
	int physics,chemistry,biology,mathematics,computer;
	int total;
	float pr;
	
	printf("Physics Mark Enter : ");
	scanf("%d",&physics);
	printf("Chemistry Mark Enter : ");
	scanf("%d",&chemistry);
	printf("Biology Mark Enter : ");
	scanf("%d",&biology);
	printf("Mathematics Mark Enter : ");
	scanf("%d",&mathematics);
	printf("Computer Mark Enter : ");
	scanf("%d",&computer);
	
	total = physics+chemistry+biology+mathematics+computer;
	
	printf("Total Mark's : %d\n",total);
	
	pr = (total*100)/500;
	
	printf("Total Pr : %.2f\n",pr);
	
	if(pr>=90)
	{
		printf("Grade Is : A\n");
		printf("You Are Pass");
	}
	else if(pr>=80)
	{
		printf("Grade Is : B\n");
		printf("You Are Pass");
	}
	else if(pr>=70)
	{
		printf("Grade Is : C\n");
		printf("You Are Pass");
	}
	else if(pr>=60)
	{
		printf("Grade Is : D\n");
		printf("You Are Pass");
	}
	else if(pr>=50)
	{
		printf("Grade Is : E\n");
		printf("You Are Pass");
	}
	else if(pr>=40)
	{
		printf("Grade Is : F\n");
		printf("You Are Fail");
	}
	
}