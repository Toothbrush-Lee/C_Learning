#include <stdio.h>

// Question1_nPower
double npower(double x, int n)
{
    double t = 0;
    if (n == 0)
        t = 1;
    else if (n > 0)
        t = x * npower(x, n - 1);
    else
        printf("Input Error\n");
    return (t);
}
void p1(void)
{
    double k1, x1;
    int n1;
    printf("pow_Input(x,n): ");
    scanf("%lf,%d", &x1, &n1);
    k1 = npower(x1, n1);
    if (k1 != 0)
        printf("%.2lf ^ %d = %lf\n", x1, n1, k1);
}

// Question2_杨辉三角
int C(int n, int k)
{
    int m = 0;
    if (n >= 0 && k >= 0 && k <= n)
    {
        if (k == 1 || k == n)
            m = 1;
        else if (k > 1 && k < n)
            m = C(n - 1, k - 1) + C(n - 1, k);
        else
            printf("Input Error\n");
    }
    else
        printf("Input Error\n");
    return (m);
}
void print(int w)
{
    int i, j = 1;
    for (i = 1; i <= w;)
    {
        if (i == j)
        {
            printf("%d\n", C(i, j));
            i++;
            j = 1;
        }
        else
        {
            printf("%d ", C(i, j));
            j++;
        }
    }
}
void p2(void)
{
    long n2, k2, m2, w;
    printf("Triangle_Input(n,k): ");
    scanf("%ld,%ld", &n2, &k2);
    m2 = C(n2, k2);
    if (m2 != 0)
        printf("杨辉三角形中第%ld行第%ld个系数=%ld\n", n2, k2, m2);
    printf("Input num of layer: ");
    scanf("%ld", &w);
    print(w);
}

//进制转换
int change(int a, int b)
{
    int x = 0;
    if (b >= 2 && b <= 9 && a >= 0)
    {
        if (a < b)
            return (a);
        else if (a >= b)
        {
            x = a % b + 10 * change(a / b, b);
            return (x);
        }
    }
    else
        printf("Input Error\n");
    return 0;
}
void p3()
{
    int a1, b1, c1 = 0;
    printf(" Converter_Input(a,b): ");
    scanf("%d,%d", &a1, &b1);
    c1 = change(a1, b1);
    if (c1 != 0)
        printf("用%d进制表示十进制数%d = %d\n", b1, a1, c1);
}

int main()
{
    p1();
    p2();
    p3();
    return 0;
}