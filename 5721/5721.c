#include<stdio.h>
int main()
{
	int i,j,n,c=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=1;j<n+1-i;j++)
		{
			if(c<10) printf("0%d",c);
			else printf("%d",c);
			c++;
		}
		printf("\n");
	}
	return 0;
}
