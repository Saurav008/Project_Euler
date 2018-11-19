#include<stdio.h>

main()
{
   long int c=0,a,b,sum=0;
    a=1;
    b=1;
    c=a+b;
    while(c<4000000) // since every 3rd term in fibonacci series is even term.
    {
        sum+=c;
        a=b+c;
        b=c+a;
        c=a+b;
    }
    printf("sum : %ld",sum);
}
