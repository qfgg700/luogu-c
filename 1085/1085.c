#include<stdio.h>
int main()
{
    int a[7][2],i,j,b=0,c=0,n;
    for(i=0;i<7;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
            c+=a[i][j];
            if(c>b)
            {
                n=i+1;
                b=c;
            }
        }
        c=0;
    }
    printf("%d",n);
    return 0;
}
