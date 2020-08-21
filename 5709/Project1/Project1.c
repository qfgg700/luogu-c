#include <stdio.h>

int main()
{
    double m, t, s, a, rest;
    int b;
    scanf_s("%lf %lf %lf", &m, &t, &s);
    if (t == 0) printf("0");
    else
    {
        a = s / t;
        b = (int)a;
        rest = m - (double)b;
        if ((int)a != a) rest--;
        if (rest < 0) printf("0");
        else printf("%.0lf", rest);
    }
    return 0;
}