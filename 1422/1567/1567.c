#include<stdio.h>
int main()
{
	int number,i,sum=0,save=0;
	scanf("%d",&number);
	int weather[number];
	for(i=0;i<number;i++)
	{
		scanf("%d",&weather[i]);
	}
	for(i=1;i<number;i++)
	{
		if(weather[i]-weather[i-1]>0) sum++;
		else sum=0;
		if(sum>save) save=sum;
	}
	printf("%d",save+1);
	return 0;
}
