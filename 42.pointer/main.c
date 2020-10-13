#include <stdio.h>

int main()
{
    int num;
    int *ip;
    num=200;
    ip=&num;
    printf("For variable num:\n");
    printf("\tValue of num: %d\tAddress of num: %u\n\n",num,&num);
    printf("For pointer variable:\n");
    printf("\tValue of num: %d\tAddress of num: %u\n",*ip,ip);

   return 0;
}
