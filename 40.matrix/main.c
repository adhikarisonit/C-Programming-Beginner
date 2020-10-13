#include<stdio.h>
int main()
{
    float A[4][4],B[4][4],C[4][4],D[4][4],E[4][4];
    int i,j;
    printf("Enter matrix A\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%f",&A[i][j]);
        }
    }
    printf("Enter matrix B\n");

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%f",&B[i][j]);
        }
    }
     printf("Matrix A and matrix B are multiplied\n\n");
        for(i=0;i<4;i++)
        {
            for(j=0;j<4;j++)
            {
                C[i][j]=(A[i][0]*B[0][j])+(A[i][1]*B[1][j])+(A[i][2]*B[2][j])+(A[i][3]*B[3][j]);
                printf("%.2f\t",C[i][j]);
            }
            printf("\n");
        }

    printf("Enter another matrix D\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%f",&D[i][j]);
        }
    }
    printf("\nThe resultant matrix and matrix D are added\n\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {

            E[i][j]=A[i][j]+B[i][j];
            printf("%.2f\t",E[i][j]);
        }
        printf("\n");
    }

    return 0;
}
