#include<stdio.h>
void main()
{
    int i,n;
    printf("size of the array:");
    scanf("%d",&n);
int arr[n];
printf("enter %d elements:\n",n);
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
printf("\n The elements in reverse order are:\n");
for(i=n-1;i>=0;i--)
{
    printf("%d",arr[i]);
}
printf("\n");
}
