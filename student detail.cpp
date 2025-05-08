//Write a program to take input of student as roll no., name, age, gender. 
#include<stdio.h>
int main()
{
	int roll, age;
	char gender;
	char name[20];
	printf("Enter roll number\t");
	scanf("%d/n",&roll);
	printf("Enter age\t");
	scanf("%d/n",&age);
	printf("Enter name\t");
	scanf(" %s/n",&name);
	printf("Enter gender\t");
	scanf(" %c/n",&gender);
	printf("/n Detail /n");
	printf("Roll number =%d",roll);
	printf("/nName =%s",name);
	printf("/nAge =%d",age);
	printf("/nGender =%c",gender);
	return 0;
}