#include <stdio.h>
#include <string.h>

void p11_1()
{
    struct date
    {
        int y;
        int m;
        int d;
    } ti;
    int n = 0;
    printf("Input y/m/d: ");
    scanf("%d/%d/%d", &ti.y, &ti.m, &ti.d);
    if (ti.m == 1)
        n = ti.d;
    else if (ti.m == 2)
        n = 31 + ti.d;
    else
    {
        switch (ti.m)
        {
        case 3:
        {
            n = 31 + 28 + ti.d;
        }
        break;
        case 4:
        {
            n = 31 + 28 + 31 + ti.d;
        }
        break;
        case 5:
        {
            n = 31 + 28 + 31 + 30 + ti.d;
        }
        break;
        case 6:
        {
            n = 31 + 28 + 31 + 30 + 31 + ti.d;
        }
        break;
        case 7:
        {
            n = 31 + 28 + 31 + 30 + 31 + 30 + ti.d;
        }
        break;
        case 8:
        {
            n = 31 + 28 + 31 + 30 + 31 + 30 + 31 + ti.d;
        }
        break;
        case 9:
        {
            n = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + ti.d;
        }
        break;
        case 10:
        {
            n = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + ti.d;
        }
        break;
        case 11:
        {
            n = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + ti.d;
        }
        break;
        case 12:
        {
            n = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + ti.d;
        }
        break;
        default:
            break;
        }
        if (ti.y % 4 == 0)
        {
            n++;
            if (ti.y % 100 == 0)
            {
                n--;
                if (ti.y % 400 == 0)
                    n++;
            }
        }
    }
    printf("%d/%d/%d is the %dth day of %d.\n", ti.y, ti.m, ti.d, n, ti.y);
}

void p11_2()
{
    int days(int y, int m, int d);
    struct date
    {
        int y;
        int m;
        int d;
    } ti;
    int n;
    printf("Input y/m/d: ");
    scanf("%d/%d/%d", &ti.y, &ti.m, &ti.d);
    n=days(ti.y, ti.m, ti.d);
    printf("%d/%d/%d is the %dth day of %d.\n", ti.y, ti.m, ti.d, n, ti.y);
}
int days(int y, int m, int d)
{
    int n=0;
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
    return n;
}

void p11_3and4()
{
    void inputscore(int n);
    void printscore(int n);
    inputscore(5);
    printf("\n");
    printf("Output: num,name,3 scores:\n");
    printscore(5);
}
struct data
{
    char num[100];
    char name[100];
    int s1, s2, s3;
} da[5];

void inputscore(int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Input the num,name,3 scores:\n");
        scanf("%s %s %d %d %d", da[i].num, da[i].name, &da[i].s1, &da[i].s2, &da[i].s3);
    }
}
void printscore(int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%s,%s,%d,%d,%d\n", da[i].num, da[i].name, da[i].s1, da[i].s2, da[i].s3);
    }
}

void p11_5()
{
    void inputscore();
    float ave1,ave2,ave3;
    int sum1=0,sum2=0,sum3=0,i;
    inputscore(10);
    for (i=0;i<10;i++)
    {
        sum1=sum1+da[i].s1;
        sum2=sum2+da[i].s2;
        sum3=sum3+da[i].s3;
    }
    ave1=(float)sum1/10.0;
    ave2=(float)sum2/10.0;
    ave3=(float)sum3/10.0;

    printf("Ave of Course1 = %.2f\n",ave1);
    printf("Ave of Course2 = %.2f\n",ave2);
    printf("Ave of Course3 = %.2f\n",ave3);
    printf("Ave of 3 Courses = %.2f\n",(ave1+ave2+ave3)/3.0);
    float max[20],*p,temp;
    int k;
    for (i=0;i<10;i++)
    {
        max[i]=da[i].s1+da[i].s2+da[i].s3;
    } 
    p=&max[0];
    for (i=0;i<10;i++)
    {
        if(*p<*(p+i))
        {
            temp=*p;
            *p=*(p+i);
            *(p+i)=temp;
            k=i;
        }
    }
    printf("\n");
    printf("Top student: \n");
    printf("name: %s\n",da[k].num);
    printf("name: %s\n",da[k].name);
    printf("Score1: %d\n",da[k].s1);
    printf("Score2: %d\n",da[k].s2);
    printf("Score3: %d\n",da[k].s3);
    printf("AveScore: %.2f\n",*p/3.0);
}

int main()
{
    p11_1();
    p11_2();
    p11_3and4();
    p11_5();
    return 0;
}
