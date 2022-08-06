#include<stdio.h>
int main()
{
 int i,j,n,a[10],temp;
 printf("enter the no. of elements\n");
 scanf("%d",&n);
 printf("enter the unsorted array\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("Original elements are:\n");
 for(i=0;i<n;i++)
 {
     printf("%d\t",a[i]);
 }
 for(i=0;i<n-1;i++)
 {
     for(j=0;j<n-1-i;j++)
     {
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
     }
 }
 printf("\nthe sorted array are\n");
 for(i=0;i<n;i++)
 {
     printf("%d\t",a[i]);
 }
 return 0;
}