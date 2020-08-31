#include<stdio.h>
int main()
{
	int i,j,k,n,c=1,d=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%02d",c);
			c++;
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(k=2*(n-1-i);k>0;k--)
		{
			printf(" ");
		}
		for(j=0;j<i+1;j++)
		{
			printf("%02d",d);
			d++;
		}
		printf("\n");
	}
	return 0;
}
