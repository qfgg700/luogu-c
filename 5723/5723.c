#include<stdio.h>
int main()
{
	int l,sum=2,count=0,total=0,j,i,totalcount=0;
	int num[100000],k=0;
	scanf("%d",&l);
	if(l==1)
	{
		printf("0");//n=1р╙льеп 
		return 0;
	}
	while(1)
	{
		for(i=1;i<=sum;i++)
		{
			if(sum%i==0) count++;
		}
		if(count>2)
		{
			count=0;
			sum++;
			continue;
		}
		if(count==2)
		{
			num[k]=sum;
			k++;
			totalcount++;
			total+=sum;
			count=0;
			sum++;
		}
		if(total>l)
		{
			total=total-(sum-1);
			j=1;
			break;
		}
		if(total==l)
		{
			j=0;
			break;
		}
	}
	if(j==0)
	{
		for(i=0;i<totalcount;i++)
		{
			printf("%d\n",num[i]);
		}
		printf("%d",totalcount);
	}
	if(j==1)
	{
		for(i=0;i<totalcount-1;i++)
		{
			printf("%d\n",num[i]);
		}
		printf("%d",totalcount-1);
	}
	return 0;
}
