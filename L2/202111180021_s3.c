#include <stdio.h>

// aa bb   cc      abc
//        A N
void p3_6()
{
    char c1 = 'a', c2 = 'b', c3 = 'c', c4 = '\101', c5 = '\116';
    printf("a%c b%c\tc%c\tabc\n", c1, c2, c3);
    printf("\t\b%c %c\n", c4, c5);
}

// ab 
// 97 98
void p3_8()
{
    int c1, c2;
    c1 = 97;
    c2 = 98;
    printf("%c%c\n", c1, c2);
    printf("%d %d\n", c1, c2);
}

// 2.500000
void p3_9_1()
{
    float x = 2.5, y = 4.7;
    int a = 7;
    double t;
    t = x + a % 3 * (int)(x + y) % 2 / 4;
    printf("%lf\n", t);
}

// 3.500000
void p3_9_2()
{
    int a = 2, b = 3;
    float x = 3.5, y = 2.5;
    double m;
    m = (float)(a + b) / 2 + (int)x % (int)y;
    printf("%lf\n", m);
}

// 9,11,9,10
void p3_10()
{
    int i, j, m, n;
    i = 8;
    j = 10;
    m = ++i;
    n = j++;
    printf("%d,%d,%d,%d\n", i, j, m, n);
}

/*
24      10
60      0
0       0
*/
void p3_12()
{
    int a = 12, n;
    printf("%d\t", a += a);
    a = 12;
    printf("%d\n", a -= 2);
    a = 12;
    printf("%d\t", a *= 2 + 3);
    a = 12;
    printf("%d\n", a /= a + a);
    a = 12;
    n = 5;
    printf("%d\t", a %= (n %= 2));
    a = 12;
    printf("%d\n", a += a -= a *= a);
}

int main()
{
    p3_6();
    p3_8();
    p3_9_1();
    p3_9_2();
    p3_10();
    p3_12();
    return 0;
}