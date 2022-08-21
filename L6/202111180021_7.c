#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void p7_10(void)
{
    char artical[3][80];
    int i = 0, j = 0, a = 0, A = 0, num = 0, space = 0, other = 0;
    printf("Input 3 lines of 80 characters:\n");
    for (; i < 3; i++)
    {
        gets(artical[i]);
        for (j = 0; j < 80 && artical[i][j] != '\0'; j++)
        {
            if (artical[i][j] >= 'a' && artical[i][j] <= 'z')
                a++;
            else if (artical[i][j] >= 'A' && artical[i][j] <= 'Z')
                A++;
            else if (artical[i][j] == ' ')
                space++;
            else if (artical[i][j] >= '0' && artical[i][j] <= '9')
                num++;
            else
                other++;
        }
    }
    printf("Upper=%d, Lower=%d, Number=%d, Space=%d, Other=%d\n", A, a, num, space, other);
}

void p7_13(void)
{
    int i = 0, j = 0;
    char a[100], b[100], c[200];
    printf("Input 1st str: ");
    gets(a);
    printf("Input 2nd str: ");
    gets(b);
    for (; i < 1000 && a[i] != '\0';)
    {
        c[i] = a[i];
        i++;
    }
    for (; j < 1000 && b[j] != '\0';)
    {
        c[i] = b[j];
        j++;
        i++;
    }
    c[i] = '\0';
    printf("%s\n", c);
}

void p7_15(void)
{
    int i = 0, j = 0;
    char a[1000], b[1000];
    printf("Input a str: ");
    gets(a);
    for (; i < 1000 && a[i] != '\0';)
    {
        b[i] = a[i];
        i = i + 1;
    }
    b[i] = '\0';
    printf("return=%s\n", b);
}

// 求出用数字0至9可以组成多少个没有重复的三位偶数（即个位、十位、百位不能相同）
void p1(void)
{
    int n1 = 0, i, j, k;
    for (i = 1; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            for (k = 0; k <= 9; k++)
            {
                if (i != j && j != k && i != k && (100 * i + 10 * j + k) % 2 == 0)
                    n1++;
            }
        }
    }
    printf("数字0至9可以组成%d个没有重复的三位偶数。\n", n1);
}

// 输入任意一个字符串和某一个字符，请删除字符串中和这个字符相同的字符，并输出字符串（例如有数
// 组s存放字符串“calculation”，删去字符’c’后数组s中为“alulation”，然后输出s，要求在处理
// 过程中只能用原字符串数组s，不能借助于其它数组）
void p2(void)
{
    char s2[100];
    char c2;
    int i;
    printf("Input the String: ");
    gets(s2);
    printf("Input the Character: ");
    scanf("%c", &c2);
    for (i = 0; i <= 99; i++)
    {
        if (s2[i] == '\0')
            break;
        else if (s2[i] != c2)
            printf("%c", s2[i]);
    }
    printf("\n");
}

// 编写一个程序，模拟投两个骰子。程序用rand函数投第一个骰子，并再次用rand函数投第二个骰子，
// 然后计算两个值的和。说明：由于每个骰子显示1到6的整数值，因此两个骰子的和为2到12，7最常见，
// 2和12最不常见。程序将投两个骰子36000次，用一维数组估算每个和出现的次数，用表格形式打印结果
// （注意：rand()函数在头文件stdlib.h中，产生的值在0到32767间）
void p3(void)
{
    int a3 = 0, b3 = 0, i, j, sum3, t[11] = {0};
    srand((unsigned)time(NULL)); //以系统时间作为rand()的起始种子
    for (i = 1; i <= 36000; i++)
    {
        a3 = 1 + rand() % 6;
        b3 = 1 + rand() % 6;
        sum3 = a3 + b3;
        t[sum3 - 2] = t[sum3 - 2] + 1;
    }
    printf("数字之和 |  频数\n");
    for (j = 2; j <= 12; j++)
        if (j >= 2 && j < 10)
            printf("   %d     |  %d\n", j, t[j - 2]);
        else
            printf("  %d     |  %d\n", j, t[j - 2]);
}

// 抢30游戏，显然具有后手优势，只要那个人报的数与前一个人报的数之和始终为3的倍数，即可获胜。
void p4(void)
{
    int a1, x1 = 0, i;
    printf("抢30游戏开始,请A、B两位准备 \n");
    for (i = 1; i <= 15; i++)
    {
    step1:
        printf("选手A,请输入你想报的数的个数:");
        scanf("%d", &a1);
        x1 = x1 + a1;
        if (a1 == 1)
            printf("好的，您报了%d\n", x1);
        else if (a1 == 2 && x1 != 31)
            printf("好的，您报了%d,%d\n", x1 - 1, x1);
        else
        {
            printf("输入错误！请重新输入!\n");
            x1 = x1 - a1;
            goto step1;
        }
        if (x1 >= 30)
        {
            printf("游戏结束，恭喜A获胜了\n");
            break;
        }
    step2:
        printf("选手B,请输入你想报的数的个数:");
        scanf("%d", &a1);
        x1 = x1 + a1;
        if (a1 == 1)
            printf("好的，您报了%d\n", x1);
        else if (a1 == 2 && x1 != 31)
            printf("好的，您报了%d,%d\n", x1 - 1, x1);
        else
        {
            printf("输入错误！请重新输入!\n");
            x1 = x1 - a1;
            goto step2;
        }
        if (x1 >= 30)
        {
            printf("游戏结束，恭喜B获胜了\n");
            break;
        }
    }
}

int main()
{
    p7_10();
    p7_13();
    p7_15();
    p1();
    p2();
    p3();
    p4();
    return 0;
}
