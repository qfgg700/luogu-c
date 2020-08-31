#include<stdio.h>
int main()
{
	int x,y,i,j=0,c=0,a[10000];
	scanf("%d %d",&x,&y);
	for(i=x;i<=y;i++)
	{
		if(i%400==0 || (i%4==0 && i%100!=0))
		{
			a[j]=i;
			c++;
			j++;
		}
	}
	printf("%d\n",c);
	for(j=0;j<c;j++)
	{
		printf("%d ",a[j]);
	}
	return 0;
} 
