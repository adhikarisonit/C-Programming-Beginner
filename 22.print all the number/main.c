#include <stdio.h>

int main()
{
    int i = 1001;
    printf("Using while loop\n");
    while(i<=2001)
    {
        if(i%7==0)
        {
            printf("%d\n",i);
        }
    i++;
    }
//using do while
 i = 1001;
printf("Using do-while\n");
do
    {
        if(i%7==0)
        {
            printf("%d\n",i);
        }
    i++;
    }while(i<=2001);
//using for
 i = 1001;
  printf("Using for loop\n");
    for(i == 1001;i<=2001;i++)
    {
        if(i%7==0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
