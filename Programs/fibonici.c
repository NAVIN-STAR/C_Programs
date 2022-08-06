#include<stdio.h>
int fib(int n);
void main()
{
    int n,res,i;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        res=fib(i);
        printf("%d\t",res);
    }
}
int fib(int n)
{
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return(fib(n-1)+fib(n-2));
}