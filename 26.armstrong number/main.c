#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n, sum = 0, rem = 0,r=0, temp;

    printf ("enter a number");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        rem = n % 10;
        r = pow(rem, 3);
        sum = sum + r;
        n = n / 10;
    }
    if (sum == temp)
        printf ("The given no is armstrong no");
    else
        printf ("The given no is not a armstrong no");
}
