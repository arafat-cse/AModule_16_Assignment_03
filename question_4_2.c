#include<stdio.h>
//Return + No Parameter
int mul()
{    
    int x , y;
    scanf("%d%d",&x,&y);
    int z;
    z=x*y;
   return z;
}
int main()
{   
   
   int s= mul();
     printf(" Total: %d",s);
    return 0;
}