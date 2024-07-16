#include<stdio.h>
int main()
{
    int a[6]={2,3,4,5,6};
    int b[6],i;
    for(i=0;i<6;i++)
    {
        b[i]=a[i];
    }
    printf("\n first array is:");
    for(i=0;i<6;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n second array is:");
    for(i=0;i<6;i++)
    {
        printf("%d\t",b[i]);
    }
}
