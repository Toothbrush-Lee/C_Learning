#include <stdio.h>
#include <stdlib.h>

char *new(int n)
{
    char *p;
    p = (char *)malloc(n * sizeof(char));
    return p;
}
void free2(char *p)
{
    free(p);
}

void p11_6and7(void)
{
    char *new (int n);
    void free2(char *p);
    char *p;
    int n=20;
    p=new(n);
    printf("%d个字符的内存空间已分配\n",n);
    printf("\n");
    free2(p);
    printf("内存空间已经释放。\n");
}


int main()
{
    p11_6and7();
    // p11_8,p11_10,p11_12系链表题，老师说不做.
    return 0;
}