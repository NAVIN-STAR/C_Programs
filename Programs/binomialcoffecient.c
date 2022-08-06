#include<stdio.h>
#define number(n) n
#define square(n) (n*number(n))
void main()
{
    int sq,x;
    printf("Enter a number\n");
    scanf("%d",&x);
    sq=square(x);
    printf("The square = %d",sq);
}