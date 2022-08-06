#include<stdio.h>
float squ(float n)
{
    int i;
    float s;
    s=n/2;
    for(i=0;i<n;i++)
    {
        s=(s+(n/s))/2;
    }
    return s;
}
int main(void)
{
   
    float num,res;
    printf("enter the number :\n");
    scanf("%f",&num);
    if(num==0||num==1)
    {
        res=num;
    }
    else 
    res=squ(num);
    printf("the square root of the given number is:  %f",res);
    return 0;
}