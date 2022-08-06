#include <stdio.h>
#include <math.h>
int main()
{
    float a[10], *ptr, mean, std, sum = 0, stdsum = 0;
    int n, i;
    printf("enter the number of elements:");
    scanf("%d", &n);
    printf("enter the array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%f", &a[i]);
    }
    ptr = a;
    for (i = 0; i < n; i++)
    {
        sum = sum + *ptr;
        ptr++;
    }
    mean = sum / n;
    ptr = a;
    for (i = 0; i < n; i++)
    {
        stdsum = stdsum + pow((*ptr - mean), 2);
        ptr++;
    }
    std = sqrt(stdsum / n);
    printf("sum=%f\n", sum);
    printf("mean=%f\n", mean);
    printf("stdsum=%f\n", std);
    return 0;
}