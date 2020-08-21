#include<stdio.h>
int main()
{
	int height[10], tall, i, number=0;
	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &height[i]);
	}
	scanf_s("%d", &tall);
	for (i = 0; i < 10; i++)
	{
		if (tall + 30 >= height[i]) number++;
	}
	printf("%d", number);
	return 0;
}