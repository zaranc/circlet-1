#include<stdio.h>
main()
{
	int i,j,a=4,b=4;
	for(i=1;i<=4;i++)
	{
	
		
		
		for(j=1;j<=8;j++)
		{
			if(j==a || j==b)
			{
				printf("*");
				
			}
			else
			{
				printf(" ");
			}
		
			
		}
		a--;
		b++;
		
		printf("\n");
	}
	
}
