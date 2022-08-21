#include <stdio.h>

void p4_4()
{
    int a = 3, b = 4, c = 5;
    float x = 1.2, y = 2.4, z = -3.6;
    long u = 51274, n = 128765;
    char c1 = 'a', c2 = 'b';
    printf("a= %d  b= %d  c= %d\n", a, b, c);
    printf("x=%f,y=%f,z=%f\n", x, y, z);
    printf("x+y= %3.2f  y+z=%3.2f  z+x=%3.2f\n", x + y, y + z, z + x);
    printf("u= %ld  n=   %ld\n", u, n);
    printf("c2='%c' or %d\n", c1, c1);
    printf("c2='%c' or %d\n", c2, c2);
}

void p4_5()
{
    int a = 5, b = 7;
    float x = 67.8564, y = -789.124;
    char c = 'A';
    long n = 1234567;
    unsigned u = 65535;
    printf("%d%d\n", a, b);
    printf("%3d%3d\n", a, b);
    printf("%f,%f\n", x, y);
    printf("%-10f,%-10f\n", x, y);
    printf("%8.2f,%8.2f,%.4f,%.4f,%3f,%3f\n", x, y, x, y, x, y);
    printf("%e,%10.2e\n", x, y);
    printf("%c,%d,%o,%x\n", c, c, c, c);
    printf("%ld,%lo,%x\n", n, n, n);
    printf("%u,%o,%x,%d\n", u, u, u, u);
    printf("%s,%5.3s\n", "COMPUTER", "COMPUTER");
}
/* ��������
57
  5  7
67.856400,-789.124023
67.856400 ,-789.124023
   67.86, -789.12,67.8564,-789.1240,67.856400,-789.124023
6.785640e+01, -7.89e+02
A,65,101,41
1234567,4553207,12d687
65535,177777,ffff,65535
COMPUTER,  COM          */

void p4_6()
{
    int a, b;
    float x, y;
    char c1, c2;
    scanf("a=%d b=%d", &a, &b);
    scanf(" %f %e", &x, &y);
    scanf(" %c %c", &c1, &c2);
    printf("a=%d b=%d\n", a, b);
    printf("x=%2.1f y=%4.2f\n", x, y);
    printf("c1='%c'c2='%c'\n", c1, c2);
}
// ���뷽��Ϊ����a=3 b=7�� �س� �� 8.5 71.82�� �س� �� A a��

void p4_8()
{
    float r, h;
    double pi = 3.14159;
    printf("������(�뾶,��):");
    scanf("%f,%f", &r, &h);
    printf("Բ�ܳ�Ϊ%.2lf\n", 2 * pi * r);
    printf("Բ���Ϊ%.2lf\n", pi * r * r);
    printf("Բ������Ϊ%.2lf\n", 4 * pi * r * r);
    printf("Բ�����Ϊ%.2lf\n", (4 * pi * r * r * r) / 3);
    printf("Բ�����Ϊ%.2lf\n", pi * r * r * h);
}

void p4_9()
{
    float f, c;
    printf("���뻪���¶�(��ֵ):");
    scanf("%f", &f);
    c = 5.0 * (f - 32) / 9;
    printf("%.2f���϶�Լ��%.2f���϶�\n", f, c);
}

void p4_10()
{
    char c1, c2;
    int c3, c4;
    printf("����4���ַ�(ע��:֮��û�пո�):");
    c1 = getchar();
    c2 = getchar();
    c3 = getchar();
    c4 = getchar();
    putchar(c1);
    putchar(c2);
    putchar(c3);
    putchar(c4);
    //��1������ʵ�飬����Ϊ���λ����ַ������;��ɡ�
    printf("\n%d,%d\n", c1, c2);
    printf("%d,%d", c3, c4);
    //��2��Ҫ�����c1,c2ֵ��ASCII�룬Ӧ��д��� "printf("%d,%d",c1,c2);";ֻ����printf��������putchar
    //��3��char��int�����������ȼۡ����ͱ����ڿ�����ַ��ķ�Χ�ڣ�ASCII��Ϊ0��127֮����ַ������ַ������ݵȼۣ�������һ����
}

int main()
{
    p4_4();
    p4_5();
    p4_6();
    p4_8();
    p4_9();
    p4_10();
    return 0;
}