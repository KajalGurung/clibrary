#include<stdio.h>
int main()
{
	int n1,n2;
	printf("enter first number");
	scanf("%d",&n1);
	printf("enter second number");
	scanf("%d",&n2);
	if(n1!=n2)
	{
		if(n1>n2)
		{
		printf("%d is greater",n1);
	}
	else
	{
	printf("%d is greater",n2);
	}
}
	else
	{
		printf("%d=%d",n1,n2);
	}
	return 0;
}