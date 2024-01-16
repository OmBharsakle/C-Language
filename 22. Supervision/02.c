//Q.2 Write A Program To Generate Mark Sheets For A Student. 
//    Enter The Marks Of 5 Students In Chemistry, Mathematics, and Physics (Each Out Of 100) 
//    Using A Structure Having Attributes :  roll no, name, chem_marks, maths_marks, and phy_marks.
//    Display The Percentage Of Each Student.

#include<stdio.h>
#include<string.h>

struct student
{
	int rollno,chem_marks, maths_marks, phy_marks;
	char name[50];
};

int main()
{
	struct student s[5];
	char name[50];
 	int i,tm;
 	float result;
 	
 	for(i=0; i<5; i++)
 	{
 		printf("\n\nStudent No.%d",i+1);
 		
		printf("\nEnter The Student Name : ");
		scanf(" %[^\n]s",&s[i].name);
		
		printf("Enter The Roll No Of The Student : ");
		scanf("%d",&s[i].rollno);
		
		printf("Enter The Chemistry Of The Student : ");
		scanf("%d",&s[i].chem_marks);
		
		printf("Enter The Mathematics Of The Student : ");
		scanf("%d",&s[i].maths_marks);
		
		printf("Enter The Physics Marks Of The Student : ");
		scanf("%d",&s[i].phy_marks);
	}
	
 	for(i=0; i<5; i++)
 	{
 		printf("\n\nThe Student %d result is below\n",i+1);
 		printf("%s(%d)\n",s[i].name,s[i].rollno);
 		printf("Chemistry   : %d\n",s[i].chem_marks);
 		printf("Mathematics : %d\n",s[i].maths_marks);
 		printf("Physics     : %d\n",s[i].phy_marks);
 		tm = s[i].chem_marks + s[i].maths_marks + s[i].phy_marks;
 		printf("Total       : %d/300\n",tm);
 		result = (tm*100.0)/300;
 		printf("Percentage  : %.2f%%",result);
	} 
}
