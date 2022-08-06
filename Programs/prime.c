#include<stdio.h>
#include<stdlib.h>
int prime(int n);
int main()
{
    int n,res;
    printf("enter the number\n");
    scanf("%d",&n);
    res=prime(n);
    if(res==0)
    {
        printf("the no. is prime");
    }
    else
    printf("The no. is not a prime no.");

}
int prime(int n)
{
    int i ;
    for(i=2;i<n;i++)
    {
        if(i%n==0)
        {
            return 1;
        }
        return 0;
    }
}