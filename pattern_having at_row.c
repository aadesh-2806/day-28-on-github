#include<stdio.h>

void main()
{
	
	int i,b[40],a[100],r,s,j,t,x,m,n;
	
	printf("hello\nenter number of values=");
	scanf("%d",&n);
	
	for(t=1;t<=n;t++)
	{
		for(i=n;i>0;i--)
		{
			if(t==i)
			{
				printf("*");
			}
			else
			{
				printf("%d",i);
			}
		}
		printf("\n");
	}
	getch();
	
}	 		
