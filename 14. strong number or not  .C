#include<stdio.h>
void main()
{
    int i,n,fact,rem;
    scanf("%d",&n);
    int sum=0;
    int temp=n;
    while(n)
    {
        i=1,fact=1;
        rem=n%10;
        while(i<=rem)
        {
            fact=fact*i;
            i++;
        }
        sum=sum+fact;
        n=n/10;
    }
    if(sum==temp)
    printf("the given no is strong number",temp);
    else 
    printf("not a strong number");
}
