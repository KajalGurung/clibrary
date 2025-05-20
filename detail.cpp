//write a program to print roll f name  ,l name and weight of a student.
#include<stdio.h>
int main()
{
	int weight,roll;
	char Fname[10];
	char Lname[10];
	printf("Enter first name");
	scanf(" %s/n", Fname);
	printf("Enter  last name");
	scanf(" %s/n",Lname);
	printf("Enter roll number");
	scanf("%d/n",&roll);
	printf("Enter weight ");
	scanf("%d/n", &weight);
	printf("/n Detail /n");
	printf("/nWeight =%d",weight);
	printf("/nRoll number =%d",roll);
	printf("/nFname=%s",Fname);
	printf("/nLname =%s",Lname);
	
	return 0;
	
}