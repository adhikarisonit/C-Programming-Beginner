#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a, b, O, A, N, X, LS, RS;
    printf(" enter the two integers \n");
    scanf(" %d %d", &a, &b);
    O = a|b;
    printf(" OR output is= %d \n", O);
    A = a&b;
    printf(" AND output is= %d \n", A);
    N = ~a;
    printf(" NOT output is= %d \n", N);
    X = a^b;
    printf(" XOR output is= %d \n", X);
    LS = b<<1;
    printf(" LS output is= %d \n", LS);
    RS = b>>1;
    printf(" RS output is= %d \n", RS);

}
