#include<stdio.h>
#include<math.h>
int main()
{
    double n=2,x,s=0;
    int i=1;
    scanf("%lf",&x);
    while(1)
    {
        s=s+n;
        n=n*0.98;
        if(s>=x) break;
        i++;
    }
    printf("%d",i);
    return 0;
}
