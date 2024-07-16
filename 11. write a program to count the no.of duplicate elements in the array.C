#include<stdio.h>
int main()
{
    int array[]={11,22,4,12,30,95};
    int len=sizeof (array)/sizeof (array[0]);
    int count=0;
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<len;j++)
        {
            if(array[i]==array[j])
            {
                count++;
                break;
            }
        }
    }
    printf("no.of duplicate elements:%d",count);
}
