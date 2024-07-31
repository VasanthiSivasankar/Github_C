#include <stdio.h>
#include <stdlib.h>

#define max_length 50
char single_digit[][max_length]={"zero","one","two","three","four","five","six","seven","eight","nine" };
char teens[][max_length]={"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
char tens[][max_length]={"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};

void num_to_words(int num,char result[])
{
    if(num<10)
    {strcpy(result,single_digit[num]);}
    else if(num<20)
    {
        strcpy(result,teens[num-10]);
    }
    else if(num<100)
    {
        if(num%10==0)
        {
            strcpy(result,tens[num/10]);
        }
        else
        {snprintf(result,max_length,"%s-%s",tens[num/10],single_digit[num%10]);}
    }
    else if(num<1000)
    {
        if(num%100==0)
        {
            snprintf(result,max_length,"%s hundred",single_digit[num/100]);
        }
        else if(num%10==0)
        {
            snprintf(result,max_length,"%s hundred and %s",single_digit[num/100],tens[(num%100)/10]);
        }
        else if(num%10!=0)
        {
            snprintf(result,max_length,"%s hundred and %s %s",single_digit[num/100],tens[(num%100)/10],single_digit[num%10]);
        }
        else
        {
            snprintf(result,max_length,"%s hundred and %s",single_digit[num/100],single_digit[num%100]);
        }
    }
    else
        snprintf(result,max_length,"number out of range");
}
int main()
{
    int num;
    char result[max_length];
    printf("enter a number : ");
    scanf("%d",&num);
    num_to_words(num,result);
    printf("%d: %s\n", num, result);
    return 0;

}
