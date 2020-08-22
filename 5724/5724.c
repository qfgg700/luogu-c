#include<stdio.h>
int main()
{
	int a[1000],num,i,max=0,min=9999;
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>max) max=a[i];
		if(a[i]<min) min=a[i];
	}
	printf("%d",max-min);
	return 0;
} 
