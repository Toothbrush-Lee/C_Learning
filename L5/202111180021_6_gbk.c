#include <stdio.h>

void p6_1()
{
    int m, n, temp1, m2, n2, r, common_multiple;
    printf("������m,n: ");
    scanf("%d,%d", &m, &n);
    m2 = m;
    n2 = n;
    if (m < n)
    {
        temp1 = m;
        m = n;
        n = temp1;
    }
    r = m % n;
    while (r != 0)
    {
        m = n;
        n = r;
        r = m % n;
    }
    common_multiple = m2 * n2 / n;
    printf("���������%d,��С��������%d\n", n, common_multiple);
}

void p6_3()
{
    int a, n, i;
    long sum = 0, temp2 = 0;
    printf("������a,n��ֵ: ");
    scanf("%d,%d", &a, &n);
    for (i = 1; i <= n; i++)
    {
        temp2 = temp2 + a;
        sum = sum + temp2;
        a = a * 10;
    }
    printf("a+aa+aaa+...=%ld\n", sum);
}

void p6_4()
{
    int i;
    long long sum = 0, temp = 1;
    for (i = 1; i <= 20; i++)
    {
        sum = sum + temp;
        temp = temp * (i + 1);
    }
    printf("1!+2!+3!+...+20!=%lld\n", sum);
}

void p6_5()
{
    int i;
    double sum1 = 0, sum2 = 0, sum3 = 0, sum;
    for (i = 1; i <= 100; i++)
        sum1 = sum1 + i;
    for (i = 1; i <= 50; i++)
        sum2 = sum2 + i * i;
    for (i = 1; i <= 10; i++)
        sum3 = sum3 + (1.0 / i);
    sum = sum1 + sum2 + sum3;
    printf("Sum=%lf\n", sum);
}

void p6_6()
{
    int a, b, c, x = 100, y;
    printf("��λ��������ˮ�ɻ�����: ");
    for (x = 100; x <= 999; x++)
    {
        a = x / 100;
        b = x / 10 - a * 10;
        c = x - a * 100 - b * 10;
        y = a * a * a + b * b * b + c * c * c;
        if (y == x)
            printf("%d ", x);
    }
    printf("\n");
}

void p6_8()
{
    int i;
    float sum = 0, x1 = 1, x2 = 2, t, f;
    for (i = 1; i <= 20; i++)
    {
        f = (float)x2 / (float)x1;
        sum = sum + f;
        t = x1 + x2;
        x1 = x2;
        x2 = t;
    }
    printf("Sum20=%f\n", sum);
}

void p6_14()
{
    int i, j, k;
    for (i = 0; i <= 3; i++)
    {
        for (j = 0; j <= 2 - i; j++)
            printf(" ");
        for (k = 0; k <= 2 * i; k++)
            printf("*");
        printf("\n");
    }
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= i; j++)
            printf(" ");
        for (k = 0; k <= 4 - 2 * i; k++)
            printf("*");
        printf("\n");
    }
}

int main()
{
    p6_1();
    p6_3();
    p6_4();
    p6_5();
    p6_6();
    p6_8();
    p6_14();
    return 0;
}
