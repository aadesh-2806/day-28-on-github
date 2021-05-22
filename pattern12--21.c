#include<stdio.h>
#include<math.h>

void main()
{
	int i,j,n,t;
	printf("hello\nenter value=");
	scanf("%d",&n);	//pattern12--21.c
	t=n;
	for(j=1;j<=n;j++)
	{
		for(i=1;i<=t;i++)
		{
			printf("%d",i);
		}
		for(i=(n-t)*2;i>=1;i--)
		{
			printf("*");
		}
		for(i=t;i>=1;i--)
		{
			printf("%d",i);
		}
		printf("\n");
		t--;
	}
	getch();
}
