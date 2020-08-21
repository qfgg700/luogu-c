#include<stdio.h>
int main()
{
    double a,b=0;
    scanf("%lf",&a);
    if(a<=150) b+=0.4463*a;
    else if(a>150 && a<=400) b+=150*0.4463+0.4663*(a-150);
    else b+=150*0.4463+250*0.4663+0.5663*(a-400);
    printf("%.1f",b);
    return 0;
}
