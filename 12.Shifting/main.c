#include <stdio.h>
#include <stdlib.h>

int main()
{ int x,a,b;
    long int s;
    printf("enter the value of a \n");
    printf("enter the value of b \n");
    scanf("%d %d",&a,&b);
    printf("enter 1 or 2 \n");
    scanf("%d",&x);
    s= a+b;
    switch(x)
    {
        case 1:
        s = s >> 8;
        printf("%ld",s);
        break;
        case 2:
        s = s << 8;
        printf("%ld", s);
        break;
        default:
        printf("invalid input \n");
        break;


    }
    return 0;

}
