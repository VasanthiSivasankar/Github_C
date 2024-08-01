#include <stdio.h>
#include <stdlib.h>

int main()
{   int n,sum;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);}
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf("%d",sum);
}
