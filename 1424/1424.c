#include<stdio.h>
int main()
{
    int day,i,n;
    long distance=0;
    scanf("%d %d",&day,&n);
    for(i=1;i<=n;i++)
    {
        if(day==6)
        {
            day++;
            continue;
        }
        if(day==7)
        {
            day=1;
            continue;
        }
        distance+=250;
        day++;
    }
    printf("%d",distance);
    return 0;
}
