#include<stdio.h>
#include<stdlib.h>
int main()
{
    char name[20];
    int units;
    float rupees=0;
    printf("enter the user name\n");
    gets(name);
    printf("enter the unit consumed");
    scanf("%d",&units);
    if(units<=200)
    {
        rupees=200*0.80;
        rupees=rupees+100;
    }
    else if(units>200&&units<=300)
    {
        rupees=200*0.80+(units-200)*0.90;
        rupees=rupees+100;
    }
    else
    {
        rupees=200*0.80+100*0.90+(units-300)*1.00;
        rupees=rupees+100;
    }
    if (rupees>400)
    {
        rupees=rupees+0.15*rupees;
    }
    printf("%s has to pay %f rupees",name,rupees);
    return 0;

}
