#include<stdio.h>
int main()
{
    float a,b,c;
    printf("enter the value of a,b,c\n");
    scanf("%f%f%f",&a,&b,&c);
    if(a>b&&a>c)
        printf("%f is a biggest",a);
    else if(b>c)
        printf("%f is a biggest",b);
    else
        printf("%f is a biggest",c);
    return 0;
}