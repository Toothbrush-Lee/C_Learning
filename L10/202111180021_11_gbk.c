#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 　1、从键盘上输入两个字符串，对两个字符串分别排序；然后将它们合并，
// 合并后的字符串按ASCII码值从小到大排序，并删去相同字符。
char s1[100], s2[100];
char scat[200], stemp[200];
void sortstr(char *s)
{
    int length = strlen(s);
    int i, j;
    char temp;
    for (i = 0; i <= length - 1; i++)
    {
        for (j = i + 1; j <= length - 1; j++)
        {
            if (*(s + i) > *(s + j))
            {
                temp = *(s + i);
                *(s + i) = *(s + j);
                *(s + j) = temp;
            }
        }
    }
}

void cat(char *p1, char *p2) // STRCAT
{
    int i = 0, j = 0;
    while (*(p1 + i) != '\0')
    {
        *(scat + i) = *(p1 + i);
        i++;
    }
    while (*(p2 + j) != '\0')
    {
        *(scat + i) = *(p2 + j);
        i++;
        j++;
    }
    *(scat + i) = '\0';
}
void delete (char *s)
{
    int length;
    int i, j = 0;
    length = strlen(s);
    for (i = 0; i < length; i++)
    {
        if (*(s + i) == *(s + i + 1))
        {
            ;
        }
        else
        {
            *(stemp + j) = *(s + i);
            j++;
        }
    }
}
void p1(void)
{
    // INPUT
    printf("s1= ");
    gets(s1);
    printf("s2= ");
    gets(s2);
    // OUTPUT
    sortstr(s1);
    printf("sorted s1 = %s\n", s1);
    sortstr(s2);
    printf("sorted s2 = %s\n", s2);
    cat(s1, s2);
    printf("Connected s1&s2: %s\n", scat);
    sortstr(scat);
    printf("sorted long str: %s\n", scat);
    delete (scat);
    printf("Final str: %s\n", stemp);
}

// 2、在main中从键盘上输入两个字符串a,b，用函数index在a中查找b，
// 如果找到，返回b在a中的起始位置，没找到返回0。查找函数申明形式如下
// int index(char *s,char *t);
void p2_main(void)
{
    char a[1000], b[100];
    int index1(char *s, char *t);
    int p;
    printf("Input str a:\n");
    gets(a);
    printf("Input str b:\n");
    gets(b);
    p = index1(a, b);
    if (p != -1)
        printf("b starts for %dst char of a.\n", p + 1);
    else
        printf("%d\n", p+1);
}

int index1(char *s, char *t)
{
    char *p1, *p2;
    int i;
    p1 = s;
    i = 0;
    while (*p1)
    {
        p2 = t;
        while (*p2 && *p1++ == *p2++)
            ;
        if (*p2 == '\0')
        {
            return i;
        }
        else
        {
            i++;
            p1 = s + i;
        }
    }
    return -1;
}
int main()
{
    p1();
    p2_main(); //p2代码在上课老师讲完之后依据老师的算法订正原来代码后提交，故方法与老师基本一致。
    return 0;
}