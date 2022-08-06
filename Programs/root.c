#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    float a,b,c,d,real,imag,root1,root2;
    printf("enter the coefficients:");
    scanf("%f%f%f",&a,&b,&c);
    if(a==0)
    {
        printf("the coefficients are invalid.");
        exit(0);
    }
    d=(b*b)-(4*a*c);
    if(d>0)
    {
        
        root1=(-b+(sqrt(d)))/(2*a);
         root2=(-b-(sqrt(d)))/(2*a);
         printf("the roots are real and distinct\n");
         printf("root1=%f\troot2=%f",root1,root2);

    }
    else if(d==0)
    {
        root1=root2=-b/(2*a);
        printf("the roots are real and equal.");
        printf("root1=root2=%f",root1,root2);
    }
    else
    {
        real=-b/(2*a);
        imag=sqrt(fabs(d)/(2*a));
        printf("the roots are distinct and imaginary");
        printf("root1=%f+i%f\troot2=%f-i%f",real,imag,real,imag);

    }
    return 0;
}