#include<stdio.h>
int main()
{
    int a[12],i,y,s=0,t,e=0;
    for(i=0;i<12;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<12;i++)
    {
        y=300-a[i]+e;
        if(y<0)
        {
            printf("-%d",i+1);
            exit(0);
        }
        t=y/100;
        s=s+100*t;
        y=y-100*t;
        e=y;
    }
    s=s*1.2+e;
    printf("%d",s);
    return 0;
}
