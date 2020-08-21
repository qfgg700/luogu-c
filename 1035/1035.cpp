#include<stdio.h>
int main()
{
	int i;
	double s=0,k; 
	scanf("%lf",&k);
	for(i=1;;i++)
	{
		s+=1/(double)i;
		if(s>k) break;
	} 
	printf("%d",i);
	return 0;
}
