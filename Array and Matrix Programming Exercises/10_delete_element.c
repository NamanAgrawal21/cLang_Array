// Program to delete an element at a particular index of an array.

#include <stdio.h>
void main()
{
    int a[100],i,m,element,position;
    printf("Enter the no. of elements of array:");
    scanf("%d",&m);
    printf("Enter the elements of array:");
    for(i=0;i<m;i++)
    {
        scanf("%d",a+i);
    }
    printf("Array before deletion of an element is: ");
    for(i=0;i<m;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nEnter the element and position of that element respectively: ");
    scanf("%d %d",&element,&position);
    for(i=position;i<m-1;i++)
    {
        a[i]=a[i+1];
    }
    m--;
    printf("Array after deletion of an element is:");
    for(i=0;i<m;i++)
    {
        printf("%d\t",*(a+i));
    }
}