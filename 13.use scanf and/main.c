#include <stdio.h>
#include <stdlib.h>

int main()
{
   char name[100];
   printf("Enter input :");
   scanf("%[^\n]%*c %s",name);
   printf("the display is %s", name);
}
