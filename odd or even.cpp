#include<stdio.h>
int main()
{
	int n1,n2;
	printf("Enter first number");
	scanf("%d",&n1);
	printf("Enter second number");
	scanf("%d",&n2);
	if(n1%2==0)
	{
		printf("  an even number");
	}
	else
	{
		printf(" an odd number");
	}
	return 0;
}