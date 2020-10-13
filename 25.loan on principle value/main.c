#include <stdio.h>

#include<stdlib.h>

int main()

{
    float actually_paid,c,payable_amount,Principal = 800000;
    int R = 11,t=1;
        //for first year
        int i ;
        for (i = 1; i <= 12; i++)
        {
           printf("Month = %d \nPrincipal: %.2f\n",i, Principal);
           payable_amount = (Principal* R * t)/100;
           printf("The Interest on the Principal is %.2f\n",payable_amount);
           actually_paid = 30000;
           printf("Amount Actually paid is %.2f\n",actually_paid);
           Principal = Principal + (payable_amount/12) - actually_paid;
           printf("Amount left to pay:%.2f\n",Principal);
         }
      //for the second year
     while(Principal >= 36133)
      {
          printf("Month = %d \nPrincipal: %.2f\n",i++, Principal);
          R = 14;
          payable_amount = (Principal* R * t)/100;
          printf("The Interest on the Principal is %.2f\n",payable_amount);
          actually_paid = 30000;
          printf("Actually paid : %.0f\n",actually_paid);
          Principal = Principal + (payable_amount/12) - actually_paid;
          printf("Amount left to pay:%.2f\n",Principal);
      }
      printf("A small amount is left to be paid\n");
      printf("The amount left to be paid is :%.2f\n",Principal);
      printf("The interest on the amount is : %.2f\n",c = (Principal*14*t)/100);
      printf("It can be paid in %.0f days",(Principal + c)/1000);
    return 0;
}
