// Program to find the maximum and minimum element of an array.

#include <stdio.h>
void main()
{
    int n;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    int a[n],i;
    printf("Enter the elements of an array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    int max,min;
    max=min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
    }
    printf("Maximum element = %d\n",max);
    printf("Minimum element = %d",min);
}