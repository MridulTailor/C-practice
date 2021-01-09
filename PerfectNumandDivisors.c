#include<stdio.h>
main()
{
   int N, T, rem, i, sum;

   scanf("%d", &T);

   while(T--)
   {
     scanf("%d", &N);

       sum=0;
       for(i=1; i<N; i++)
       {
         rem=N%i;

          if(rem==0)
          {
            sum=sum+i;
          }
       }
       if(sum==N)
          printf("true\n");
      else
          printf("false\n");
     }
}
