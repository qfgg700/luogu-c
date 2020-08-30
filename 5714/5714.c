#include <stdio.h>

int main() 
{
	float bmi,m,h;
	int a=4;
	scanf("%f %f",&m,&h);
	bmi=m/(h*h);
	if(bmi<18.5)
		printf("Underweight");
	else if(bmi>=18.5 && bmi<=24)
		printf("Normal");
	else
	{
		printf("%.*f\n",a,bmi);
		printf("Overweight");
	}
	return 0;
} 
