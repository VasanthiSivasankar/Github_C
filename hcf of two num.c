#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i,min,hcf;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>b)
    {
        min = a;
    }
    else{
        min = b;
    }
    for(i=1;i<min;i++)
    {
        if(a%i==0 && b%i == 0)
        {
            hcf = i;
        }
    }
    printf("%d",hcf);
}
