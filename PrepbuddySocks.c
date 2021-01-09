#include<stdio.h>
main()
{
  int T, i;
  scanf("%d", &T);

    int N[T], draws[T];
    for(i=1; i<=T; i++)
    {
      scanf("%d", &N[i]);
     }
     for(i=1; i<=T; i++)
     {
       draws[i]=N[i]+1;
       printf("%d\n", draws[i]);
     }
}
