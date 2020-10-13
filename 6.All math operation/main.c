#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,c,d,e,f,g;
   printf("enter any first number=\n");
   scanf("%d",&a);
   printf("enter any second number=\n");
   scanf("%d",&b);
   c=a+b;
   printf("Addition of two number is=%d\n",c);
   d=a-b;
   printf("subtraction of two number is=%d\n",d);
   e=a*b;
   printf("Multiplication of two number is=%d\n",e);
   f=a/b;
   printf("Division of two number is=%d\n",f);
   g=a%b;
   printf("remainder is =%d",g);

    return 0;
}
