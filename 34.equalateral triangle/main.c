#include <stdio.h>
#include<math.h>
int main()
{
    float x1,x2,x3a,y1,y2,y3a,x3b,y3b;
    scanf("%f%f%f%f",&x1,&x2,&y1,&y2);
    x3a=(x1+x2+sqrt(3)*(y1-y2))/2;
    x3b=(x1+x2-sqrt(3)*(y1-y2))/2;
    y3a=(y1+y2+sqrt(3)*(x1-x2))/2;
    y3b=(y1+y2-sqrt(3)*(x1-x2))/2;
    printf("X3= %.2f & %.2f\n",x3a,x3b);
    printf("y3= %.2f & %.2f",y3a,y3b);
    return 0;
}
