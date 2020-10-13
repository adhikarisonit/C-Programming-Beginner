#include <stdio.h>
#include <stdlib.h>

int main()

 {
    int a ;
    scanf("%d", &a);
    fibo(a);
}

 void fibo(int n)
 {
    int t1=0,t2=1,nextTerm=0;
    for (;; )
    {
        if(t1>=n)
        {
            break;
        }
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
 }
