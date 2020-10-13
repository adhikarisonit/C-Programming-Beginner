#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a,b,c;
  printf("Enter any three number :");
  scanf("%d%d%d",&a,&b,&c);
  if (a*a==b*b+c*c){
    printf("squre of %d is sum of squre of %d and %d",a,b,c);
  }
 else if (b*b==a*a+c*c){
    printf("squre of %d is sum of squre of %d and %d",b,a,c);
  }
 else if (c*c==a*a+b*b){
    printf("squre of %d is sum of squre of %d and %d",c,a,b);}
else {printf("No pythagorean triplet of any combination");}
return 0;
}
