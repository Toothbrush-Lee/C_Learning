#include <stdio.h>
#include <string.h>

// 5.�м�����Χ��һȦ��˳���źš��ӵ�1���˿�ʼ����(��1��3������,������3��
// ���˳�Ȧ��,��������µ���ԭ���ڼ��ŵ���λ��
void p5()
{
    int n, i, j = 0, k = 0;
    int *p;
    int a[100] = {0};
    printf("num of people: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) //�ֱ�ֵ1��n
        a[i] = i + 1;
    p = a;
    i = 0;
    while (n - k > 1)
    {
        if (*(p + i) != 0) //������3���ˣ���ֵ0
            j++;
        if (j == 3)
        {
            *(p + i) = 0;
            j = 0;
            k++; //��������+1
        }
        i++;
        if (i == n)
            i = 0;
    }
    while (*p == 0)
        p++;
    printf("remain id: %d\n", *p);
}

// 10. ��һ�� 5X5 �ľ���������Ԫ�ط�������,4���Ƿֱ��4����С��Ԫ�أ�˳��Ϊ
// �����ң����ϵ������δ�С�����ţ�,дһ����ʵ��֮���� main �������á�
void p10()
{
    int a[5][5];
    void matrixedit(int *p);
    int *p, i, j;
    printf("matrix:\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("The matrix before exchange:\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%-2d  ", a[i][j]);
        }
        printf("\n");
    }
    p = &a[0][0];
    matrixedit(p);
    printf("The matrix after exchange:\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%-2d  ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void matrixedit(int *p)
{
    int i, j, temp;
    int *max, *min, *min2, *min3, *min4;

    max = p;
    for (i = 0; i < 25; i++) // max
    {
        if (*max < *(p + i))
            max = (p + i);
    }
    temp = *max;
    *max = *(p + 12);
    *(p + 12) = temp;

    min = p;
    for (i = 0; i < 25; i++) // min1
    {
        if (*min > *(p + i))
            min = (p + i);
    }
    temp = *min;
    *min = *(p);
    *(p) = temp;

    min2 = p + 1;
    for (i = 0; i < 5; i++) // min2
    {
        for (j = 0; j < 5; j++)
        {
            if (i == 0 && j == 0)
                continue;
            if (*min2 > *(p + 5 * i + j))
                min2 = (p + 5 * i + j);
        }
    }
    temp = *min2;
    *min2 = *(p + 4);
    *(p + 4) = temp;

    min3 = p + 1;
    for (i = 0; i < 5; i++) // min3
    {
        for (j = 0; j < 5; j++)
        {
            if ((i == 0 && j == 0) || (i == 0 && j == 4))
                continue;
            if (*min3 > *(p + 5 * i + j))
                min3 = (p + 5 * i + j);
        }
    }
    temp = *min3;
    *min3 = *(p + 20);
    *(p + 20) = temp;

    min4 = p + 1;
    for (i = 0; i < 5; i++) // min4
    {
        for (j = 0; j < 5; j++)
        {
            if ((i == 0 && j == 0) || (i == 0 && j == 4) || (i == 4 && j == 0))
                continue;
            if (*min4 > *(p + 5 * i + j))
                min4 = (p + 5 * i + j);
        }
    }
    temp = *min4;
    *min4 = *(p + 24);
    *(p + 24) = temp;
}

// 14. ��������������ʱ˳����������У��ú���ʵ�֡�
void p14(void)
{
    void changesort(int *p1, int n);
    int a[100] = {0}, i, n, temp, *p;
    printf("how many nums?\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%dth num: ", i);
        scanf("%d", &temp);
        a[i - 1] = temp;
    }
    p = a;
    changesort(p, n);
    printf("resorted:\n");
    for (i = 0; i < n; i++)
        printf("%d ", *(p + i));
    printf("\n");
}

void changesort(int *p, int n)
{
    int t, *p1, *p2, i;
    for (i = 0; i < n / 2; i++)
    {
        p1 = p + i;
        p2 = p + n - i - 1;
        t = *p1;
        *p1 = *p2;
        *p2 = t;
    }
}

// 16. ����һ���ַ������������ֺͷ������ַ������磺
// A123��456 17960�� 302tab5876
// ������������������Ϊһ�����������δ�ŵ�һ���顣�С�����,123����a[0],456����
// a[1]??ͳ�ƹ��ж��ٸ��������������Щ����
void p16(void)
{
    char s[100] = {0};
    void count(char *str);
    printf("input string:\n");
    getchar();
    gets(s);
    count(s);
}
void count(char *str)
{
    int a[32], n = 0;
    char *ptr = str;
    int i = 0, str_len = strlen(str);
    while (i < str_len)
    {
        if (*(ptr + i) >= '0' && *(ptr + i) <= '9')
        {
            int len = 1;
            while (*(ptr + i + len) >= '0' && *(ptr + i + len) <= '9' && (i + len) < str_len)
            {
                len++;
            }
            int sum = *(ptr + i + len - 1) - '0';
            int unit = 1;
            for (int j = len - 2; j >= 0; j--)
            {
                unit = unit * 10;
                sum = sum + (*(ptr + i + j) - '0') * unit;
            }
            a[n++] = sum;
            i += len;
            continue;
        }
        i++;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main()
{
    p5();
    p10();
    p14();
    p16();
    return 0;
}