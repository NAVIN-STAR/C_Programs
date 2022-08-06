#include<stdio.h>
#include<stdlib.h>
int prime(int n);
int main()
{
    int num,res;
    printf("enter the number:");
    scanf("%d",&num);
res=prime(num);
if(res==1)
{
    printf("the no. is a prime no.");

}
else {
    printf("the no.is not a prime no.");

}
return 0;
}
int prime (int n)
{
    int i;
    for(i=2;i<n;i++)
    {
    if (n%i==0)
    {
        return 0;
    }
    }
    return 1;
}