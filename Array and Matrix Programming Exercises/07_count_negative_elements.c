// Program to count the negative elements of an array.

#include <stdio.h>
void main()
{
    int n;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    int a[n],i,c_neg=0;
    printf("Enter the elements of an array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
            c_neg++;
    }
    printf("Count of negative elements = %d\n",c_neg);
}