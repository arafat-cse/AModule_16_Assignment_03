#include<stdio.h>
int  is_palindrome(char st[10])
{
     int pl=1;
    int ln=strlen(st);
    for (int i = 0; i <ln; i++)
    {   
        if (st[ln-i-1]!=st[i])
        {
           pl=0;
           break;
        }
    }
    return pl;
}
int main()
{
    char st[10];
    scanf("%s",&st);
    //strlan
  int pla= is_palindrome(st);
  if (pla==1)
  {
    printf("Palindrome");
  }
  else{
    printf("Not Palindrome");
  }
    return 0;
}