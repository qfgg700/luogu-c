#include<stdio.h>
int main()
{
	int a[100],i,n;
	for(i=0;i<100;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]==0)
		{
			n=i;
			break;
		 } 
	}
	for(n=i-1;n>=0;n--)
	{
		printf("%d ",a[n]);
	}
	return 0;
}
