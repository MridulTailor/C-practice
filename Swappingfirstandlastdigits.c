#include<stdio.h>
#include<math.h>
main()
{
  int n, first_digit, last_digit, sum, digits, a, b, x;

    scanf("%d", &n);

    digits = (int)log10(n);
    first_digit = n / pow(10, digits);
    last_digit = n % 10;
    a = first_digit * (pow(10, digits));
    b = n % a;
    n = b / 10;
    x = last_digit * (pow(10, digits)) + (n * 10 + first_digit);

  printf("reversed number is %d", x);

}
