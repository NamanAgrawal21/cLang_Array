// Program to sum of all the elements of an array.

#include <stdio.h>
void main()
{
    int n;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    int a[n],i,sum=0;
    printf("Enter the elements of an array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("The sum of all the elements of array is %d",sum);
}