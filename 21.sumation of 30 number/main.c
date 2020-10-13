#include <stdio.h>

int main()
{
    int n = 1,a;
    for(n = 1;n <= 30;n++)
    {
    printf("%d\n",a = n^2 + 3*n + 5);
    }

//using while
n = 1;
while(n <= 30)
{
    printf("\t%d\n",a = n^2 + 3*n + 5);
    n++;
}
//using do - while
n = 1;
do
{
    printf("\t\t%d\n",a = n^2 + 3*n + 5);
    n++;
}while(n<=30);
    return 0;
}
