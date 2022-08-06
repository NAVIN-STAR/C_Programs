#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b;
    float res;
    char op;
    printf("enter the arithmetic expression:");
    scanf("%d%c%d",&a,&op,&b);
    switch(op)
    {
        case '+' : res=a+b;
                 break;
        case '-' : res=a-b;
                break;
        case '*': res=a*b;
                break;
        case '/': if(b!=0)
                        res=a/b;
                    else
                    {
                        printf("division by zero is not possible");
                        exit(0);
                    }
                    break;
        case '%' : res=a%b;                    
        break;
        default: printf("Invalid operator.");

    }
printf("%d%c%d=%f",a,op,b,res);
return 0;
}