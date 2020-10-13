#include <stdio.h>
#include <stdlib.h>

int main()
{
   short int a=32222;
   long int b=2130089765;
   unsigned long int c=4256577578;
   signed long int d=2130230764;
   double e=15.65783839334577;
   char sonit[20]="sonitkumaradhikari";
   long double f=178.1928374651922746;
   printf("%d\n",sizeof(a));
   printf("%d\n",sizeof(b));
   printf("%d\n",sizeof(c));
   printf("%d\n",sizeof(d));
   printf("%d\n",sizeof(e));
   printf("%d\n",sizeof(sonit));
   printf("%d\n",sizeof(f));
   return 0;
}
