#include<stdio.h>
int main()
{
	const int accountnumber=10101010;
	int balance=10000;
	int option;
	int depositmoney,withdrawmoney;
	char again;
	int mycode = 3333;
	int pincode;

	printf("*******************************");
	printf("\n Welcome to ATM Service \n");
	firstgo:
		
	printf("\nEnter your pin code \n");
	scanf("%d",&pincode);
	if( pincode == mycode)
	{
	do{
	
	printf("1. Deposit Money \n2. Withdraw Money \n3. Account Information");
	printf("\nEnter your option\n");
	scanf("%d",&option);
	switch(option)
	{
		case1:
			printf("\n How much do you want to deposit \n");
			scanf("%d",&depositmoney);
			balance = balance +depositmoney;
			
			printf("\n Your total balance =%d",balance);
			break;//jump statement
			case 2:
			printf("\n how much do you want to withdraw\n");
			scanf("%d",&withdrawmoney);
			if(withdrawmoney < balance)
			{
			balance=balance-withdrawmoney;
			printf("\nYour total balance =%d",balance);
			} 
			else
			{
				printf(" Insufficient balance"); 
			}
			
			break;
			case 3:
			printf("\n Your account number =%d",accountnumber);
			printf("\n Your total balance=%d",balance);
			break;
			case 4:
				exit (0);
	}
	printf("\n Do you want to continue ?\n press y for continue\n ");
	scanf(scanf("%c",%again);
	while(again == 'y');
}
	printf("\nIncorrect password\n");
	count=count++;
	goto firstgo;
}
return 0;
}