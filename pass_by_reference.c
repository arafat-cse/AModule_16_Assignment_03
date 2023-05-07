#include<stdio.h>
void mum(int *p)
{
    printf("%d\n",*p);
    *p=100;
}
int main()
{   
    int x=10;
    mum(&x);

    printf("%d",x);
    return 0;
}