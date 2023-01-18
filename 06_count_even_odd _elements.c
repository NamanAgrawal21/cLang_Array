// Program to count even and odd elements of an array.

#include <stdio.h>
void main()
{
    int n;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    int a[n],i,c_even=0,c_odd=0;
    printf("Enter the elements of an array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
            c_even++;
        else
            c_odd++;
    }
    printf("Count of even elements = %d\n",c_even);
    printf("Count of odd elements = %d",c_odd);
}