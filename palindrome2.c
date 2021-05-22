#include<stdio.h>
#include<conio.h>

void palindrome(int);
void main()
{
	int a,t;
	
	printf("hello\nenter no.=");							//yes to every result
	scanf("%d",&a);
	
	palindrome(a);
	
	getch();
													//palindrome
}

void palindrome(int x)
{
	int i,c,m,y,b[100];
	
	i=0;
	m=x;
	while(x!=0)
	{
		b[i]=x%10;
		x=x/10;
		i++;
	}
	
	i=i-1;
	y=0;
	c=1;
	while(i>=0)
	{
		y=b[i]*c+y;
		c=c*10;
		i--;
	}
	//printf("%d \n%d",m,y);
	if(m==y)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	
	getch();
}
