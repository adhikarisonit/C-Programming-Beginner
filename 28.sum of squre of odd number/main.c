/******************************************************************************

Take two numbers a and b as input from the user and print the sum of the squares of all the odd numbers between a and b (including a and b)

*******************************************************************************/
#include <stdio.h>
#include<math.h>

int main()

{
    int num1,num2,i,c,d = 0;
    printf("Enter Num1\t");
    scanf("%d",&num1);
    printf("Enter Num2\t");
    scanf("%d",&num2);
    for(i=num1;i<=num2;i++)
    {
        if(i%2==1)
        {

            c = pow(i,2);
            d += c;
        }

    }
    printf("The sum is %d",d);


    return 0;
}
