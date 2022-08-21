# S1 C Programing Study

**The homework of the 1st class in 2022 Spring Semester.**

## Code
```c
#include <stdio.h>
void p1()
{
    printf("This is a C program.\n");
}
void p2()
{
    int a,b,sum;
    a=123;
    b=456;
    sum=a+b;
    printf("sum is %d\n",sum);
} 
void p3()
{
    int max1(int x,int y);
    int c,d,e;
    scanf("%d,%d",&c,&d);
    e=max1(c,d);
    printf("max=%d\n",e);
}
int max1(int x,int y)
{
    int z;
    if(x>y) z=x;
    else z=y;
    return(z);
}
void p4()
{
    printf("**********\n");
    printf("Very Good!\n");
    printf("**********\n");
}	
void p5()
{
    int i,j,k,max;
    scanf("%d,%d,%d",&i,&j,&k);
    max=i;
    if (max<j)
        max=j;
    if (max<k)
        max=k;
    printf("max=%d\n",max);
}
int main()
{
    p1();
    p2();
    p3();
    p4();
    p5();
    return 0;
}
```

## Return

```
This is a C program.
sum is 579
1,2
max=2
**********
Very Good!
**********
2,-9,0
max=2
```


 
