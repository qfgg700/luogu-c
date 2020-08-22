#include<stdio.h>
int main()
{
	int a[1000],n,i=1,j;
	scanf("%d",&n);
	a[0]=n;
	while(n!=1)
	{
		if(n%2==0)
		{
			n/=2;
			a[i]=n;
			i++;
		}
		else
		{
			n=n*3+1;
			a[i]=n;
			i++;
		}
	}
	for(j=i-1;j>=0;j--)
	{
		printf("%d ",a[j]);
	}
	return 0;
}
