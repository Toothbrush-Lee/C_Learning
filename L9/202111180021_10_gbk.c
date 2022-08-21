#include <stdio.h>
#include <string.h>

#define EXCHANGE(a, b) \
    temp = a;          \
    a = b;             \
    b = temp

#define LEAP_YEAR(y) (y % 4 == 0 && y % 100 != 0) || y % 400 == 0
#define CHANGE 1

void p8_15(void)
{
    int i, j, id[10];
    char name[100][100];

    // input
    for (i = 0; i <= 9; i++)
    {
        printf("ID of employee %d: \n", i + 1);
        scanf("%d", &id[i]);
        printf("name of employee %d: \n", i + 1);
        getchar();
        gets(name[i]);
    }

    // 排序
    int temp;
    char tempname[10];
    for (i = 0; i <= 10 - 1; i++)
    {
        for (j = 0; j < 10 - i; j++)
        {
            if (id[j] > id[j + 1])
            {
                temp = id[j];
                id[j] = id[j + 1];
                id[j + 1] = temp;
                strcpy(tempname, name[j]);
                strcpy(name[j], name[j + 1]);
                strcpy(name[j + 1], tempname);
            }
        }
    }
    for (i = 0; i <= 10 - 1; i++)
        printf("id=%d, name=%s\n", id[i], name[i]);

    //筛选
    int in;
    printf("input ID: ");
    scanf("%d", &in);
    if (in > id[4])
    {
        for (i = 5; i < 10; i++)
        {
            if (in == id[i])
            {
                printf("name=%s\n", name[i]);
            }
        }
    }
    else
    {
        for (i = 0; i < 5; i++)
        {
            if (in == id[i])
            {
                printf("name=%s\n", name[i]);
            }
        }
    }
}

void p8_18(void)
{
    int y, m, d, n = 0;
    printf("Input y/m/d: ");
    scanf("%d/%d/%d", &y, &m, &d);
    if (m == 1)
        n = d;
    else if (m == 2)
        n = 31 + d;
    else
    {
        switch (m)
        {
        case 3:
        {
            n = 31 + 28 + d;
        }
        break;
        case 4:
        {
            n = 31 + 28 + 31 + d;
        }
        break;
        case 5:
        {
            n = 31 + 28 + 31 + 30 + d;
        }
        break;
        case 6:
        {
            n = 31 + 28 + 31 + 30 + 31 + d;
        }
        break;
        case 7:
        {
            n = 31 + 28 + 31 + 30 + 31 + 30 + d;
        }
        break;
        case 8:
        {
            n = 31 + 28 + 31 + 30 + 31 + 30 + 31 + d;
        }
        break;
        case 9:
        {
            n = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + d;
        }
        break;
        case 10:
        {
            n = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + d;
        }
        break;
        case 11:
        {
            n = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + d;
        }
        break;
        case 12:
        {
            n = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + d;
        }
        break;
        default:
            break;
        }
        if (y % 4 == 0)
        {
            n++;
            if (y % 100 == 0)
            {
                n--;
                if (y % 400 == 0)
                    n++;
            }
        }
    }
    printf("%d/%d/%d is the %dth day of %d.\n", y, m, d, n, y);
}

void p9_1()
{
    int a = 1, b = 2, temp = 0;
    EXCHANGE(a, b);
    printf("%d,%d\n", a, b);
    // define见头部
}

void p9_4()
{
    int year = 2012;
    if (LEAP_YEAR(year))
        printf("%d is a leap year.\n", year);
    else
        printf("%d is not a leap year. \n", year);
}

void p9_10() //当前 #define CHANGE 1
{
    char s[1000];
    printf("Input a sentence: ");
    getchar();
    gets(s);
#if CHANGE
    int i;
    for (i = 0; i <= 1000; i++)
    {
        if (s[i] == '\0')
            break;
        else
        {
            if (s[i] == 'z' || s[i] == 'z')
                s[i] = s[i] - 25;
            else if ((s[i] >= 'a' && s[i] < 'z') || (s[i] >= 'A' && s[i] < 'Z'))
                s[i]++;
        }
    }
#else
#endif
    printf("%s\n", s);
}

int main()
{
    p8_15();
    p8_18();
    p9_1();
    p9_4();
    p9_10();
}
