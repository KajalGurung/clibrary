#include<stdio.h>
int main()
{
	int i,count=0;
	
	for(i=2;i<=549;i++)
	{
		if(i%2==0)
		{
			
		count= count+1;
		}
	}
		
	printf("total numbers of even numbers upto 549= %d",count);
	
	
	return 0;
}