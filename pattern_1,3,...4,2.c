#include<stdio.h>

void main()
{
	
	int i,b[40],a[100],r,s,j,t,x,m,n;
	
	printf("hello\nenter number of values=");
	scanf("%d",&n);
	
	for(i=1;i<=n;i+=2)
	{
		printf("%d ",i);
	}
	if(n%2==0)
	{
		for(i=n;i>0;i-=2)
		{
			printf("%d ",i);
		}
	}
	else
	{
		for(i=n-1;i>0;i-=2)
		{
			printf("%d ",i);
		}
	}
	getch();
	
}	 		
