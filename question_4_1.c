#include<stdio.h>
//Return + Parameter
int sum(int x,int y)
{
    int z;
    z=x+y;
   return z;
}
int main()
{   
    int x , y;
    scanf("%d%d",&x,&y);
   int s= sum(x,y);
     printf(" Total: %d",s);
    return 0;
}