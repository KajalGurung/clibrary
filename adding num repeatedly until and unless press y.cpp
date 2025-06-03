#include <stdio.h>
int main()
{
	int num1,num2,add;
	char option;
		do{
			printf("enter num1 ");
			scanf("%d/n",&num1);
			printf("enter num2 ");
			scanf("%d/n",&num2);

			add=num1+num2;
			printf("addition=%d\n",add);
			printf("do you want to continue press y to continue");
			scanf(" %c",&option);
		}
		while(option=='y');
		return 0;
}