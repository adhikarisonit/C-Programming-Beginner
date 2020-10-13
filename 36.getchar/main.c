#include<stdio.h>
#include<math.h>

int main()
{
    int c,sign1=1,sign2=1,b,x,count=0,op,a,k,cnt=0,add=0,i,ref;
    float num1=0,num2=0,dec1=0,dec2=0,dec=0,p,result,check;
    printf("Enter the first number\n");
    c=getchar();
    if(c=='-')
        sign1=-1;
    else
    {
        num1*= 10;
        num1+= c - '0';
    }
    while ((c = getchar()) != '\n')
    {
        if (c=='.')
            break;
        else
        {
            num1 *= 10;
            num1 += c - '0';
        }
    }
    if(c=='.')
    {
        char point=c;
        while ((c = getchar()) != '\n')
        {
            if (c > '9' || c < '0' )
                continue;
            dec1 *= 10;
            dec1+= c - '0';
            cnt++;
        }
        while(cnt!=0)
        {
            dec1*=0.1;
            cnt--;
        }
    }
    num1+=dec1;

    num1*=sign1;
    printf("Enter the second number\n");
    c=getchar();
    if(c=='-')
        sign2=-1;
    else
    {
        num2*= 10;
        num2+= c - '0';
    }
    while ((c = getchar()) != '\n')
    {
        if (c=='.')
            break;
        else
        {
            num2*= 10;
            num2 += c - '0';
        }
    }
    if(c=='.')
    {
        char point=c;
        while ((c = getchar()) != '\n')
        {
            if (c > '9' || c < '0' )
                continue;
            dec2 *= 10;
            dec2+= c - '0';
            cnt++;
        }
        while(cnt!=0)
        {
            dec2*=0.1;
            cnt--;
        }
    }
    num2+=dec2;
    num2*=sign2;
    printf("Enter the arithmetic operation to be performed\n");
    op=getchar();

    if(op==43)
        result=num1+num2;
    if(op==45)
        result=num1-num2;
    if(op==42)
        result=num1*num2;
    if(op==47)
        result=num1/num2;
    if(result<0)
    {
        check=result*(-1);
        putchar('-');
    }
    else check=result;

    k=(int)(check);

    while(k!=0)
    {
            a=k%10;
            x=x*10+a;
            k/=10;
            count++;
    }

    while(count!=0)
    {
        a=x%10;
        putchar(a+'0');
        x/=10;
        count--;
    }
    dec=check-(int)check;
    if(dec<1&&dec>0)
    {
        putchar('.');
        while(count!=5)
        {
            dec=dec*10;
            count++;
        }
        ref=(int)dec;
        for(i=0;i<5;i++)
        {
            add=add*10+ref%10;
            ref/=10;
        }
        while(add!=0)
        {
            p=add%10;
            putchar(p+'0');
            add/=10;
        }

    }
    return 0;
}
