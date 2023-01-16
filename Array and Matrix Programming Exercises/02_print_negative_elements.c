// Program to print all the negative elements of an array.

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
    printf("The negative elements of an array are:\n");
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
            printf("%d\t",*(a+i));
    }
}