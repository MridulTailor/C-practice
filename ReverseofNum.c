#include<stdio.h>
int main()
{
   int T;
   scanf("%d", &T);
  while(T--)
  {
   int num, rev, rem;
   scanf("%d", &num);
   rev=0;
   rem=0;
   while(num!=0)
   {
     rem=num%10;
     rev=rev*10 + rem;
     num = num/10;
   }
   printf("%d\n", rev);
  }
  return 0;
}
