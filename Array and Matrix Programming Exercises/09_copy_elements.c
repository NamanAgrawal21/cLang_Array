// Program to copy all elements of an array into another array

#include <stdio.h>
void main()
{
    int n;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    int a[n],b[n],i;
    printf("Enter the elements of an array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
        b[i]=a[i];
    }
    printf("The elements of another array are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(b+i));
    }
}