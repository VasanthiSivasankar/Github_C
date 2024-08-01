#include <stdio.h>
#include <string.h>
int main()
{

    int input,size,n;
    scanf("%d", &input);
    size=(input*2)-1;
  	n=size/2;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            int min =i;
            if(j<min)
            {
                min=j;
            }
            if((size-i-1)<min)
            {
                min=(size-i-1);
            }
            if((size-j-1)<min)
            {
                min=(size-j-1);
            }
            printf("%d ",(n-min+1));
        }
        printf("\n");
    }
    return 0;
}
