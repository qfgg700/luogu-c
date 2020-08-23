#include<stdio.h>
#include<string.h>
int main()
{
	char a[8];
	int i,count=0;
	gets(a);
	for(i=0;i<8;i++)
	{
		if(a[i]=='1')
		{
			count++;
		}
	}
	printf("%d",count);
	return 0;
}
