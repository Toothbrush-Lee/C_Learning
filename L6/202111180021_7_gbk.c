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

// ���������0��9������ɶ��ٸ�û���ظ�����λż��������λ��ʮλ����λ������ͬ��
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
    printf("����0��9�������%d��û���ظ�����λż����\n", n1);
}

// ��������һ���ַ�����ĳһ���ַ�����ɾ���ַ����к�����ַ���ͬ���ַ���������ַ�������������
// ��s����ַ�����calculation����ɾȥ�ַ���c��������s��Ϊ��alulation����Ȼ�����s��Ҫ���ڴ���
// ������ֻ����ԭ�ַ�������s�����ܽ������������飩
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

// ��дһ������ģ��Ͷ�������ӡ�������rand����Ͷ��һ�����ӣ����ٴ���rand����Ͷ�ڶ������ӣ�
// Ȼ���������ֵ�ĺ͡�˵��������ÿ��������ʾ1��6������ֵ������������ӵĺ�Ϊ2��12��7�����
// 2��12�����������Ͷ��������36000�Σ���һά�������ÿ���ͳ��ֵĴ������ñ����ʽ��ӡ���
// ��ע�⣺rand()������ͷ�ļ�stdlib.h�У�������ֵ��0��32767�䣩
void p3(void)
{
    int a3 = 0, b3 = 0, i, j, sum3, t[11] = {0};
    srand((unsigned)time(NULL)); //��ϵͳʱ����Ϊrand()����ʼ����
    for (i = 1; i <= 36000; i++)
    {
        a3 = 1 + rand() % 6;
        b3 = 1 + rand() % 6;
        sum3 = a3 + b3;
        t[sum3 - 2] = t[sum3 - 2] + 1;
    }
    printf("����֮�� |  Ƶ��\n");
    for (j = 2; j <= 12; j++)
        if (j >= 2 && j < 10)
            printf("   %d     |  %d\n", j, t[j - 2]);
        else
            printf("  %d     |  %d\n", j, t[j - 2]);
}

// ��30��Ϸ����Ȼ���к������ƣ�ֻҪ�Ǹ��˱�������ǰһ���˱�����֮��ʼ��Ϊ3�ı��������ɻ�ʤ��
void p4(void)
{
    int a1, x1 = 0, i;
    printf("��30��Ϸ��ʼ,��A��B��λ׼�� \n");
    for (i = 1; i <= 15; i++)
    {
    step1:
        printf("ѡ��A,���������뱨�����ĸ���:");
        scanf("%d", &a1);
        x1 = x1 + a1;
        if (a1 == 1)
            printf("�õģ�������%d\n", x1);
        else if (a1 == 2 && x1 != 31)
            printf("�õģ�������%d,%d\n", x1 - 1, x1);
        else
        {
            printf("�����������������!\n");
            x1 = x1 - a1;
            goto step1;
        }
        if (x1 >= 30)
        {
            printf("��Ϸ��������ϲA��ʤ��\n");
            break;
        }
    step2:
        printf("ѡ��B,���������뱨�����ĸ���:");
        scanf("%d", &a1);
        x1 = x1 + a1;
        if (a1 == 1)
            printf("�õģ�������%d\n", x1);
        else if (a1 == 2 && x1 != 31)
            printf("�õģ�������%d,%d\n", x1 - 1, x1);
        else
        {
            printf("�����������������!\n");
            x1 = x1 - a1;
            goto step2;
        }
        if (x1 >= 30)
        {
            printf("��Ϸ��������ϲB��ʤ��\n");
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
