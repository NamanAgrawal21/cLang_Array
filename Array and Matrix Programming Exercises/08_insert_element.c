// Program to insert an element at a particular index of an array.

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
    printf("Array before insertion of an element is: ");
    for(i=0;i<m;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nEnter the element and position of that element respectively: ");
    scanf("%d %d",&element,&position);
    for(i=m-1;i>=position;i--)
    {
        a[i+1]=a[i];
    }
    a[position]=element;
    m++;
    printf("Array after insertion of an element is:");
    for(i=0;i<m;i++)
    {
        printf("%d\t",*(a+i));
    }
}