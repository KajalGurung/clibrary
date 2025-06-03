// Write  a program to determine whether a number is prime or composite
#include<stdio.h>
int main()
{
	
	int num,i,count=0;
	char check;
	do
	{
	count=0;
	
	printf("Enter num");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("prime number");
		
	}
	else if(num==1)
	{
		printf("Neither prime nor composite");
		
	}
	else
	{
		printf("composite number");
	}
	printf("\nDo you want to continue press y to continue\n");
	scanf(" %c",&check);
}
while(check=='y');
	return 0;
}