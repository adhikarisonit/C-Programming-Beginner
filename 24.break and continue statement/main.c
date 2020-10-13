#include <stdio.h>
void main(){
int a,b;
printf("\nEnter the first Integer: ");
scanf("%d",&a);
printf("\nEnter the second Integer: ");
scanf("%d",&b);
printf("\nBitwise Operation:OR Result:%d ",a|b);
printf("\nBitwise Operation:AND Result:%d ",a&b);
printf("\nBitwise Operation:NOT Result:%d ",~a);
printf("\nBitwise Operation:XOR Result:%d ",a^b);
printf("\nBitwise Operation:LEFT SHIFT Result:%d ",a<<b);
printf("\nBitwise Operation:RIGHT SHIFT Result:%d \n",a>>);
}
