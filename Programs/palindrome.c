#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,num,rev=0,rem;
    printf("enter the positive integer:");
    scanf("%d",&num);
    n=num;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(rev==num)
    {
        printf("the given no. is a palindrome number");        
    }
    else
    {
        printf("the no. is not a palindrome no.");

    }
    return 0;
}