#include <stdio.h>
void main ()
{
           int a;
           long f,factr();
           printf ("\n Enter a Number : ");
           scanf ("%d",&a);
           f=factr(a);
           printf ("\n The Factorial of %d is : %ld",a,f);
}
       long factr(int a)
 {
     int i;
     long f=1;
     for (i=1;i<=a;i++)
            f=f*i;
            return(f);
 }
