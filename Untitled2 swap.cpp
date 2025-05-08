#include<stdio.h>
int main()
{
	int num1,num2,temp;
	printf("enter num 1:\t");
	scanf("%d",&num1);
	printf("\n");
	printf("enter num 2:\t");
	scanf("%d",&num2);
	printf("\n Before swapping \n value of num1=%d\n value of num2=%d",num1,num2);
	temp=num1;
	num1=num2;
	num2=temp;
	printf("\nAfter swapping\n value of num1=%d\n value of num2=%d\n",num1,num2);
	return 0;
	
}