#include <stdio.h>
#define max_length 50

void numtowords(int a, int b) {
    char single_digits[][max_length] = {
        "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"
    };

    for (int i = a; i <= b; i++) {
        if (i >= 0 && i <= 9)
        {
            printf("%s\n", single_digits[i]);
        }
    }
    for(int i = a; i <= b; i++)
           {
               if(i<=9){

            if (i % 2 == 0) {
                printf("even\n");
            }
            else
            {
                printf("odd\n");
            }
               }
           }

}

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    numtowords(a, b);

    return 0;
}
