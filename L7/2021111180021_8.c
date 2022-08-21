#include <stdio.h>
#include <string.h>

// 1、程序的功能是求算式xyz+yzz=532中x，y，z的值（其中xyz和yzz分别表示一个三位数）请编写此程序
void p1(void)
{
    int x, y, z;
    for (x = 1; x <= 5; x++)
    {
        for (y = 1; y <= 5; y++)
        {
            for (z = 1; z <= 9; z++)
            {
                if (100 * x + 10 * y + z + 100 * y + 11 * z == 532)
                    printf("x=%d, y=%d, z=%d\n", x, y, z);
            }
        }
    }
}

// 2、鸡兔共有30只，脚共有90个，请编程序计算鸡兔各有多少。
void p2(void)
{
    int chicken, rabbit;
    for (rabbit = 0; rabbit <= (23); rabbit++)
    {
        chicken = 30 - rabbit;
        if (chicken * 2 + rabbit * 4 == 90)
        {
            printf("鸡有%d只，兔有%d只\n", chicken, rabbit);
        }
    }
}

// 3、从三个红球、五个白球、六个黑球中任意取出八个球，且其中必须有白球，输出所有可能的方案
void p3(void)
{
    int red, white, black, i = 0;
    printf("可能的方案有：\n");
    for (white = 1; white <= 5; white++)
    {
        for (black = 0; black <= 6; black++)
        {
            red = 8 - black - white;
            if (red >= 0 && red <= 3)
            {
                printf("白色%d个，黑色%d个，红色%d个\n", white, black, red);
                i++;
            }
        }
    }
    printf("一共有%d种\n", i);
}

// 4、将一个字符串数组的第k个字符位置开始，拷贝n个字符到另一个数组，并输出
void p4(void)
{
    int k, n, i, j = 0;
    char s1[100], s2[100];
    printf("Input the string: ");
    gets(s1);
step1:
    printf("k=");
    scanf("%d", &k);
    printf("n=");
    scanf("%d", &n);
    if ((int)strlen(s1) >= k + n - 1)
    {
        for (i = k - 1; i < k + n - 1; i++)
        {
            s2[j] = s1[i];
            j++;
        }
        printf("s2=%s\n", s2);
    }
    else
    {
        printf("Illegal input! Please input it again.\n");
        goto step1;
    }
}

// 5、求所有不超过200的n值，n的平方是具有对称性质的回文数。
// 回文数就是将一个数从左向右读与从右向左读是一样的，像34543和1234321都是回文数。
// 例如满足题意要求的数有：n=11时，11^2=121；n=111时, 111^2=12321
void p5(void)
{
    int n, n2, d1, d2, d3, d4, d5;
    for (n = 0; n <= 200; n++)
    {
        n2 = n * n;
        if (n2 < 10)
            printf("n=%d,回文数=%d\n", n, n2);
        else if (n2 < 100)
        {
            d1 = n2 / 10;
            d2 = n2 - d1 * 10;
            if (d1 == d2)
                printf("n=%d,回文数=%d\n", n, n2);
        }
        else if (n2 < 1000)
        {
            d1 = n2 / 100;
            d2 = n2 / 10 - d1 * 10;
            d3 = n2 - 100 * d1 - 10 * d2;
            if (d1 == d3)
                printf("n=%d,回文数=%d\n", n, n2);
        }
        else if (n2 < 10000)
        {
            d1 = n2 / 1000;
            d2 = n2 / 100 - 10 * d1;
            d3 = n2 / 10 - 100 * d1 - 10 * d2;
            d4 = n2 - 1000 * d1 - 100 * d2 - 10 * d3;
            if (d1 == d4 && d2 == d3)
                printf("n=%d,回文数=%d\n", n, n2);
        }
        else if (n2 >= 10000)
        {
            d1 = n2 / 10000;
            d2 = n2 / 1000 - 10 * d1;
            d3 = n2 / 100 - 100 * d1 - 10 * d2;
            d4 = n2 / 10 - 1000 * d1 - 100 * d2 - 10 * d3;
            d5 = n2 - 10000 * d1 - 1000 * d2 - 100 * d3 - 10 * d4;
            if (d1 == d5 && d2 == d4)
                printf("n=%d,回文数=%d\n", n, n2);
        }
    }
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