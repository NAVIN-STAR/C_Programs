#include<stdio.h>
#include<math.h>
#define PI 3.14
int main()
{
    int i,degree;
    float x,nume,deno,term,sum=0;
    printf("enter the degree value:\n");
    scanf("%d",&degree);
    x=degree*(PI/180);
    nume=x;
    deno=1;
    i=2;
    do
    {
      term=nume/deno;
      nume=-nume*x*x;
      deno=deno*i*(i+1);
      sum=sum+term;
      i=i+2;
    }while(fabs(term)>=0.00001);
    printf("\nThe sine of %d is %f",degree,sum);
    printf("\nthe sine of the %d using built in function is\n %f",degree,sin(x));
    return 0;
}
