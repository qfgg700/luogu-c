#include<stdio.h>
int main()
{
	int number, i, j, sum=0;
	scanf("%d", &number);
	int fish[number], lovely[number];
	for (i = 0; i < number; i++)
	{
		scanf("%d", &fish[i]);
	}
	lovely[0] = 0;
	for (i = 1; i < number; i++)
	{
		for (j = i-1; j >= 0; j--)
		{
			if (fish[i] - fish[j] > 0) sum++;
		}
		lovely[i]=sum;
		sum=0;
	}
	for(i=0;i<number;i++)
	{
		printf("%d ",lovely[i]);
	}
	return 0;
}
