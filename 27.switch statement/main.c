/******************************************************************************

Write a program to assign a grade according to the marks received in an exam. Make use of the switch statement. Your program should take the marks as input from the user and print the appropriate grade.
More than 80 receives A grade
More than 65 receives B grade
More than 50 receives C grade
More than 30 receives D grade
Less than 30 receives Failed

*******************************************************************************/
#include <stdio.h>

int main()
{
    int marks;
    printf("Enter marks\t");
    scanf("%d",&marks);
    if(marks >= 80)
    {
        marks = 1;

    }
    else if(marks < 80)
    {
       if(marks < 65)
            {
                if(marks <50)
                        {
                            if(marks <30)
                                    {
                                        marks = 5;
                                    }
                            else
                            {
                              marks =4;
                            }
                        }
                else
                {
                    marks = 3;
                }
            }
        else
        {
            marks = 2 ;
        }

    }
        switch (marks)
        {
            case 1 :
                printf("Grade Recieved : A");
                break;
            case 2:
                printf("Grade Recieved : B");
                break;
            case 3:
                printf("Grade Recieved : C");
                break;
            case 4:
                printf("Grade Recieved : D");
                break;
            case 5:
                printf("Grade Recieved : F");
                break;
        }

    return 0;
}
