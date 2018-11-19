#include<stdio.h>

int multiple(int n)
{

    int i,sum=0,q,d=0,p;
    for(i=3;i<n;i++)
    {
        if(i%10==0||i%10==5||i%3==0)
        {
            sum+=i;
        }
}
    return sum;
}
main()
{
    int n,sum=0;
    printf("enter N \n");
    scanf("%d",&n);
    sum=multiple(n);
    printf("sum is : %d \n",sum);

}
