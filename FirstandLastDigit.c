#include<stdio.h>
int main()
{
   int T, N, last_digit, first_digit, sum;

   scanf("%d", &T);

   while(T--)
   {
      scanf("%d", &N);
        while(N!=0)
        {
           first_digit=N%10;
           N=N/10;
        }
        sum=first_digit + last_digit;
        printf("%d\n", sum);
   }
   return 0;
}
