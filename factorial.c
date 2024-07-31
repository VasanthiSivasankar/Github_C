#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,result=1;
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        result*=i;
    }
    printf("%d",result);
    return 0;
}
