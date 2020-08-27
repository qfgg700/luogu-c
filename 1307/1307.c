#include<stdio.h>
int main()
{
	int n,m,t;
	scanf("%d",&n);
	while(n!=0)
	{
		t=n%10;
		m=m*10+t;
		n/=10;
	}
	if(n<0) printf("-");
	printf("%d",m);
	return 0;
}
