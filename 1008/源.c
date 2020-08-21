#include<stdio.h>
int repeat(int a1, int a2, int a3, int b1, int b2, int b3, int c1, int c2, int c3)
{
	if (a1 == a2 || a1 == a3 || a1 == b1 || a1 == b2 || a1 == b3 || a1 == c1 || a1 == c2 || a1 == c3) return 0;
	else if (a2 == a3 || a2 == b1 || a2 == b2 || a2 == b3 || a2 == c1 || a2 == c2 || a2 == c3) return 0;
	else if (a3 == b1 || a3 == b2 || a3 == b3 || a3 == c1 || a3 == c2 || a3 == c3) return 0;
	else if (b1 == b2 || b1 == b3 || b1 == c1 || b1 == c2 || b1 == c3) return 0;
	else if (b2 == b3 || b2 == c1 || b2 == c2 || b2 == c3) return 0;
	else if (c1 == c2 || c1 == c3) return 0;
	else if (c2 == c3) return 0;
	else return 1;
}
int zero(int a1, int a2, int a3, int b1, int b2, int b3, int c1, int c2, int c3)
{
	if (a1 && a2 && a3 && b1 && b2 && b3 && c1 && c2 && c3 != 0) return 1;
	else return 0;
}
int main()
{
	int a1, a2, a3, b1, b2, b3, c1, c2, c3;
	int i, j, k;
	for (i = 100; i <= 333; i++)
	{
		a1 = i / 100;
		a3 = i % 10;
		a2 = (i % 100) / 10;
		for (j = 200; j <= 666; j++)
		{
			b1 = j / 100;
			b3 = j % 10;
			b2 = (j % 100) / 10;
			for (k = 300; k <= 999; k++)
			{
				c1 = k / 100;
				c3 = k % 10;
				c2 = (k % 100) / 10;
				if (2 * i == j && 3 * i == k && repeat(a1, a2, a3, b1, b2, b3, c1, c2, c3) == 1 && zero(a1, a2, a3, b1, b2, b3, c1, c2, c3) == 1)
				{
					printf("%d %d %d\n", i, j, k);
				}
			}
		}
	}
	return 0;
}