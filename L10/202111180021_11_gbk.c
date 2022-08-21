#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// ��1���Ӽ��������������ַ������������ַ����ֱ�����Ȼ�����Ǻϲ���
// �ϲ�����ַ�����ASCII��ֵ��С�������򣬲�ɾȥ��ͬ�ַ���
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

// 2����main�дӼ��������������ַ���a,b���ú���index��a�в���b��
// ����ҵ�������b��a�е���ʼλ�ã�û�ҵ�����0�����Һ���������ʽ����
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
    p2_main(); //p2�������Ͽ���ʦ����֮��������ʦ���㷨����ԭ��������ύ���ʷ�������ʦ����һ�¡�
    return 0;
}