#include <stdio.h>
int main()
{
    int i, a[5], b[5], sum[10];
    printf("enter elements of first array\n");
    for (i = 0; i < 4; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the elements of second array\n");
    for (i = 0; i < 4; i++)
    {
        scanf("%d", &b[i]);
    }
    for (i = 0; i < 4; i++)
    {
        sum[i] = a[i] + b[i];
    }
   printf("the sum of two arraqy elements is \n");
   for (i = 0; i < 4; i++)
   {
       printf("%2d",sum[i]);
   }

    return 0;
}