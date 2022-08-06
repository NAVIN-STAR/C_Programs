#include<stdlib.h>
#include<stdio.h>
int main()
{
    int a[100],mid,ele,n,i,high,low,found=0;
    printf("enter the no. of elements \n");
    scanf("%d",&n);
    printf("enter the sorted array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the srearch element:\n");
    scanf("%d",&ele);
    low=0;
    high=n-1;
    while(low<=high&&!found)
    {
        mid=(low+high)/2;
        if(a[mid]==ele)
        {
            found=1;
        }
        else if(a[mid]>ele)
        {
            high=mid-1;
        }
        else
        low=mid+1;
    }
    if (found==1)
    {
        printf("the number is found in the position %d",mid+1);

    }
    else{
       printf("\nnumber not found");

    }
    return 0;
}