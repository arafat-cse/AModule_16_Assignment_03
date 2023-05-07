// #include<stdio.h>
// int count_before_zero(int n)

// {

// }
// int main()
// {

//     int n;
//     int count=0;
//     scanf("%d",&n);
//     int an[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&an[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (an[i]==0)
//         {
//             break;
//         }
//         count++;
        
        
//     }
//      printf("%d ",count);
   
    
    
//     return 0;
// }
#include <stdio.h>

int count_before_zero(int an[], int n)
{
   int number = 0;
   for (int i = 0; i < n; i++)
   {
       if (an[i] == 0)
       {
           break;
       }
       number++;
   }
   return number;
}
int main()
{
   int n;
   scanf("%d", &n);
   int an[n];
   for (int i = 0; i < n; i++)
   {
       scanf("%d", &an[i]);
   }
   int count = count_before_zero(an, n);
   printf("%d\n", count);
   return 0;
}