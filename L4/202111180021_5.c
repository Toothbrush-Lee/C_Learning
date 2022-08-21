#include <stdio.h>

void p5_5()
{
    double x, y;
    printf("请输入x的值: ");
    scanf("%lf", &x);
    if (x < 1)
        y = x;
    else if (x < 10)
        y = 2 * x - 1;
    else
        y = 3 * x - 11;
    printf("y=%lf\n", y);
}

void p5_6()
{
    char level;
    int score;
    printf("请输入百分制整数成绩: ");
    scanf("%d", &score);
    if (score >= 90)
        level = 'A';
    else if (score >= 80)
        level = 'B';
    else if (score >= 70)
        level = 'C';
    else if (score >= 60)
        level = 'D';
    else
        level = 'E';
    printf("等级成绩为 %c\n", level);
}

void p5_7()
{
    long a;
    int digit;
    printf("请输入不多于五位的正整数: ");
    scanf("%ld", &a);
    if (a >= 10000)
        digit = 5;
    else if (a >= 1000)
        digit = 4;
    else if (a >= 100)
        digit = 3;
    else if (a >= 10)
        digit = 2;
    else
        digit = 1;
    printf("您输入的数字为%d位数\n", digit);
    long b, c, d, e, f; //分别对应个、十、百、千、万位。
    f = a / 10000;
    e = a / 1000 - 10 * f;
    d = a / 100 - 100 * f - 10 * e;
    c = a / 10 - 1000 * f - 100 * e - 10 * d;
    b = a - 10000 * f - 1000 * e - 100 * d - 10 * c;
    if (digit == 1)
    {
        printf("各位数字: %ld\n", b);
        printf("逆序输出为:%ld\n", b);
    }
    else if (digit == 2)
    {
        printf("各位数字: %ld,%ld\n", c, b);
        printf("逆序输出为:%ld\n", b * 10 + c);
    }
    else if (digit == 3)
    {
        printf("各位数字: %ld,%ld,%ld\n", d, c, b);
        printf("逆序输出为:%ld\n", b * 100 + c * 10 + d);
    }
    else if (digit == 4)
    {
        printf("各位数字: %ld,%ld,%ld,%ld\n", e, d, c, b);
        printf("逆序输出为:%ld\n", b * 1000 + c * 100 + d * 10 + e);
    }
    else
    {
        printf("各位数字: %ld,%ld,%ld,%ld,%ld\n", f, e, d, c, b);
        printf("逆序输出为:%ld\n", b * 10000 + c * 1000 + d * 100 + e * 10 + f);
    }
}

void p5_8_if()
{
    double I, bonus;
    printf("请输入利润: ");
    scanf("%lf", &I);
    if (I <= 100000)
        bonus = I * 0.1;
    else if (I <= 200000)
        bonus = 10000 + (I - 100000) * 0.075;
    else if (I <= 400000)
        bonus = 17500 + (I - 200000) * 0.05;
    else if (I <= 600000)
        bonus = 27500 + (I - 400000) * 0.03;
    else if (I <= 1000000)
        bonus = 33500 + (I - 600000) * 0.015;
    else
        bonus = 37500 + (I - 1000000) * 0.01;
    printf("应发的奖金为%lf\n", bonus);
}
void p5_8_switch()
{
    long k, I1;
    printf("请输入利润: ");
    scanf("%ld", &I1);
    k = I1 / 100000;
    switch (k)
    {
    case 0:
        printf("%lf\n", I1 * 0.1);
        break;
    case 1:
        printf("%lf\n", 10000 + (I1 - 100000) * 0.075);
        break;
    case 2:
        printf("%lf\n", 17500 + (I1 - 200000) * 0.05);
        break;
    case 3:
        printf("%lf\n", 17500 + (I1 - 200000) * 0.05);
        break;
    case 4:
        printf("%lf\n", 27500 + (I1 - 400000) * 0.03);
        break;
    case 5:
        printf("%lf\n", 27500 + (I1 - 400000) * 0.03);
        break;
    case 6:
        printf("%lf\n", 33500 + (I1 - 600000) * 0.015);
        break;
    case 7:
        printf("%lf\n", 33500 + (I1 - 600000) * 0.015);
        break;
    case 8:
        printf("%lf\n", 33500 + (I1 - 600000) * 0.015);
        break;
    case 9:
        printf("%lf\n", 33500 + (I1 - 600000) * 0.015);
        break;
    default:
        printf("%lf\n", 37500 + (I1 - 1000000) * 0.01);
    }
}

void p5_9()
{
    int i1, i2, i3, i4, tmp;
    printf("请输入四个整数(空格间隔): ");
    scanf("%d%d%d%d", &i1, &i2, &i3, &i4);
    if (i1 > i2)
    {
        tmp = i1;
        i1 = i2;
        i2 = tmp;
    }
    if (i2 > i3)
    {
        tmp = i2;
        i2 = i3;
        i3 = tmp;
    }
    if (i3 > i4)
    {
        tmp = i3;
        i3 = i4;
        i4 = tmp;
    }
    if (i1 > i2)
    {
        tmp = i1;
        i1 = i2;
        i2 = tmp;
    }
    if (i2 > i3)
    {
        tmp = i2;
        i2 = i3;
        i3 = tmp;
    }
    if (i1 > i2)
    {
        tmp = i1;
        i1 = i2;
        i2 = tmp;
    }
    printf("从小到大依次是:%d,%d,%d,%d", i1, i2, i3, i4);
}

int main()
{
    p5_5();
    p5_6();
    p5_7();
    p5_8_if();
    p5_8_switch();
    p5_9();
    return 0;
}