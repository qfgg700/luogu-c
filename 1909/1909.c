#include<stdio.h>
int main()
{
    int n,a1,a2,b1,b2,c1,c2,count,s,f;
    scanf("%d",&n);
    scanf("%d %d",&a1,&a2);
    scanf("%d %d",&b1,&b2);
    scanf("%d %d",&c1,&c2);
    count=n/a1;
    if(n%a1!=0) count++;
    s=count*a2;
    f=s;
    count=n/b1;
    if(n%b1!=0) count++;
    s=count*b2;
    if(s<f) f=s;
    count=n/c1;
    if(n%c1!=0) count++;
    s=count*c2;
    if(s<f) f=s;
    printf("%d",f);
    return 0;
}
