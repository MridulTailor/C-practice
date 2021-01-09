#include<stdio.h>
main()
{
   float x, y, remain;

   scanf("%f %f", &x, &y);

   if(x<y)
     {
      if((int)x%5 == 0)
        {
          remain=y-x-0.5;
          printf("%0.2f", remain);
        }
      else
          printf("%0.2f", y);
     }
   else
      printf("%0.2f", y);
}
