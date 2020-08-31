#include<stdio.h>
int main()
{
	
	int m,i,a[3];
	float n,d;
	scanf("%f",&n);
	m=(int)n;
	d=n-(float)m;
	for(i=0;i<3;i++)
	{
		a[i]=m%10;
		m/=10;
	}
	printf("%.0f.%d%d%d",10*d,a[0],a[1],a[2]);
	return 0;
} 
