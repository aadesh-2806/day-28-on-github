#include<stdio.h>

void main()
{
	
	int i,a[50][50],r,k,d,t,n,j,l;

	printf("hello\nenter number of values=");
	scanf("%d",&n);

	a[0][0]=1;
	printf("1\n");
	d=1;
	i=1;
	while(i<n)
	{
		j=0;
		t=0;
		while(j<d)
		{
			k=j+1;
			r=1;
			while(k<d)
			{
				if(a[i-1][j]==a[i-1][k])
				{
					r++;
					k++;
				}
				else
				{
					break;
				}
			}
			printf("%d",r);
			a[i][t++]=r;
			printf("%d",a[i-1][j]);
			a[i][t++]=a[i-1][j];
			j=k;
		}
		printf("\n");
		d=t;
		i++;
	}
	
	getch();
	
}
