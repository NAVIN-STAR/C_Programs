#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c;
    printf("enter the three numbers");
    scanf("%d%d%d",&a,&b,&c);
    int max=0;
    if(max<a)
    {
        max=a;
    }
    if(max<b)
    {
        max=b;
    }
    if(max<c)
    {
        max=c;
    }
    printf("the largest number is %d", max);
    return 0;
}