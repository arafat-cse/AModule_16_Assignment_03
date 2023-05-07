#include<stdio.h>
//No Return + Prameter
void div(int x,int y)
{
    int s=x/y;
    printf("%d",s);
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    div(a,b);
    
    return 0;
}