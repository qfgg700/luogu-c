#include<stdio.h>
int main()
{
	float a;
	int c=1,b;
	scanf("%f",&a);
	while(1)
	{
		if(a==1)
		{
			printf("1");
			break;
		}
		a=a/2;
		b=(int)a;
		if(b==1) 
		{
			printf("%d",c+1);
			break;
		}
		c++;
	}
	return 0;
} 
