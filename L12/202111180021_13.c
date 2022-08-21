#include <stdio.h>
#include <math.h>

int main()
{
    int a,b=1;
    double fsin(int x,int y);
    double fcos(int x,int y);
    double fexp(int x,int y);
    int cal(int x,int y, double(*f)(int,int));
    printf("How many rectangles? ");
    scanf("%d",&a);
    cal(a,b,fsin);
    printf("\n");
    cal(a,b,fcos);
    printf("\n");
    cal(a,b,fexp);
    printf("\n");
}

int cal(int x,int y, double(*f)(int,int))
{
    double result;
    result=(double)y/(double)x*f(x,y);
    printf("%f",result);
    return result;
}

double fsin(int x,int y)
{
    int i;
    float s;
    s=0;
    for (i=1;i<=x;i++)
    {
        s=s+sin((double)i*y/x);
    }
    return s;

}

double fcos(int x,int y)
{
    int i;
    float s;
    s=0;
    for (i=1;i<=x;i++)
    {
        s=s+cos((double)i*y/x);
    }
    return s;

}

double fexp(int x,int y)
{
    int i;
    float s;
    s=0;
    for (i=1;i<=x;i++)
    {
        s=s+exp((double)i*y/x);
    }
    return s;
}