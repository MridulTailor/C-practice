#include<stdio.h>
main()
{
  int T;
  scanf("%d", &T);

   while(T--)
   {
     long long int N, M, B, t=0, x;

      scanf("%lld\t%lld\t%lld", &N, &B, &M);

      while(N>0)
      {
        if(N%2==0)
          {x=(N/2);}
        else
          {x=(N+1)/2;}

      t=t+(x*M);
      N=N-x;
      M=2*M;
      t=t+B;
    }
    printf("%lld", t-B);
   }
}
