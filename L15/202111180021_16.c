#include <stdio.h>

int getbits(int value, int n1, int n2)
{
    int a;
    a = (~(~0 << (n2 - n1 + 1))) & (value >> (n1));
    return a;
}
void p12_1(void)
{
    int getbits(int x, int y, int z);
    int value, n1, n2, o;
    printf("Input value(8进制),n1,n2: \n");
    scanf("%o,%d,%d", &value, &n1, &n2);
    o = getbits(value, n1, n2);
    printf("取出的数为%d(十进制),%o(八进制).\n", o, o);
}

void p12_2(void)
{
    int value;
    int odds(int value);
    printf("Input value(8进制): \n");
    scanf("%o", &value);
    printf("奇数位为:%o\n", odds(value));
}
int odds(int value)
{
    int a = 0, i, t;
    for (i = 0; i < 8; i++)
    {
        t = 1 << (2 * i + 1);
        a = a + ((value & t) >> (i + 1));
    }
    return a;
}

unsigned int move(unsigned int value, int n)
{
    int i;
    unsigned int t;
    if (n > 0)
    {
        for (i = 0; i < n; i++)
        {
            t = value & 1;
            value = value >> 1;
            if (t == 1)
                value = value | 0x80000000;
        }
    }
    else
    {
        n = -n;
        for (i = 0; i < n; i++)
        {
            t = value & 0x80000000;
            value = value << 1;
            if (t == 0x80000000)
                value = value | 1;
        }
    }
    return value;
}

void p12_4(void)
{
    unsigned int a, b;
    int n;
    printf("Input: value,n(右正左负):\n");
    scanf("%d,%d", &a, &n);
    b = move(a, n);
    printf("位移后 = %u\n", b);
}

void p12_5(void)
{
    unsigned int a;
    unsigned int bits(unsigned);
    printf("Input an oct number:\n");
    scanf("%o", &a);
    printf("输出结果：%o\n", bits(a));
}
unsigned int bits(unsigned value)
{
    unsigned int z;
    z = value & 0100000;
    if (z == 0100000)
        z = ~value + 1;
    else
        z = value;
    return (z);
}

int main()
{
    p12_1();
    p12_2();
    p12_4();
    p12_5();
    return 0;
}