#include<stdio.h>
int main()
{
	float t,n;
	scanf("%f %f",&t,&n);
	if(t==0)
	{
		printf("0\n");
		printf("%.0f",2*n); 
		return 0;
	}
	printf("%.3f\n",t/n);
	printf("%.0f",2*n);
	return 0;
}
