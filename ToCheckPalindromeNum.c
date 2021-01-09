#include<stdio.h>
main()
{
   int num, rem, rev=0, temp;

   scanf("%d", &num);
   temp=num;
   while(temp!=0)
   {
      rem=temp%10;
      num=temp/10;
      rev=rev*10 + rem;
   }
   if(rev=num)
     printf("It is palindrome number");
    else
       printf("It is not a palindrome number");
}
