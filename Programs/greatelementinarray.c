#include<stdio.h>
int main()
{
    int a,b, sum;
    int *p,*q;
printf("enter two numbers\n");
scanf("%d%d",&a,&b);
    p=&a;
    q=&b;
    sum=*p+*q;
    printf(" the sum of two numbers =%d",sum);
    return 0;
}
