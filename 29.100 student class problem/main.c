/******************************************************************************

There are 100 students in a class. There is a event A: a student knows C programming,
event B: a student knows FORTRAN programming. Take suitable inputs for P(A or B), P(A and B)
and another variable of your choice.
Write a program to find the outputs of P(B|A), P(A|B), P(not B| not A),
P(not A| not B) using Bayes theorem.
*******************************************************************************/
#include <stdio.h>

int main()

{
float a,b,m,n,x,y,p,q;
printf("No of students knowing \"C\"\t");
scanf("%f",&a);
printf("No of students knowing C or FORTRAN\t");
scanf("%f",&m);
printf("No of students knowing C and FORTRAN\t");
scanf("%f",&n);
printf("No of students knowing FORTRAN : %.0f\n",b = m + n - a);
a = a/100;
b = b/100;
m = m/100;
n = n/100;
printf("P(A|B) is: %.2f\n",p = n/a);
printf("P(B|A) is: %.2f\n",p = n/b);
printf("P(~A|~B) is: %.2f\n",p = (1 - m)/(1 - b));
printf("P(~B|~A) is: %.2f\n",q = (1 - m)/(1 - a));



return 0;
}
