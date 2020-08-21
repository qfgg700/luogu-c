#include<stdio.h>
int main()
{
	int n, x, i = 1, temp, sum = 0;
	scanf_s("%d %d", &n, &x);
	while (i <= n)
	{
		temp = i;
		while (temp != 0)
		{
			if (temp % 10 == x) sum++;
			temp = temp / 10;
		}
		i++;
	}
	printf("%d", sum);
	return 0;
}