#include<stdio.h>
#include<string.h> 
int main()
{
	char isbn[13];
	int i,sum=0;
	for(i=0;i<13;i++)
	{
		scanf("%c",&isbn[i]);
	}
	sum=(isbn[0]-48) *1 +(isbn[2]-48)*2 + (isbn[3]-48)*3 + (isbn[4]-48)*4 + (
    isbn[6]-48)*5 + (isbn[7]-48)*6 + (isbn[8]-48)*7 +(isbn[9]-48)*8 + (isbn[10]-48)*9;
    sum=sum%11;
    if (sum==10)
    {
        if (isbn[12]=='X')
            printf("Right");
        else
        {
            for(i=0;i<12;i++)
        	printf("%c",isbn[i]);
        	printf("X");
        }
	}
	else
	{
		if (isbn[12]==sum+48)
            printf("Right");
        else
        {
        	for(i=0;i<12;i++)
             printf("%c",isbn[i]);
             printf("%d",sum);
		}
	}
	return 0;
}
