// Program to print the unique elements of an array.

#include <stdio.h>
#include <limits.h>
void main()
{
    int n;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    int a[n],b[100]={0},i;                          // Here array b[INT_MAX] is not working.
    printf("Enter the elements of an array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        max=a[i];
    }
    for(i=0;i<n;i++)
    {
        b[a[i]]++;
    }
    printf("Unique elements of this array are:");
    for(i=0;i<=max;i++)
    {
        if(b[i]==1)
        printf("%d\t",i);
    }

}