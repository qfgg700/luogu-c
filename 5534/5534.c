#include<stdio.h>
int main()
{
	long long a1,a2,n,s;
	scanf("%ld %ld %ld",&a1,&a2,&n);
	s=(a1+(a2-a1)*(n-1)+a1)*n/2;
	printf("%ld",s);
	return 0;
}
