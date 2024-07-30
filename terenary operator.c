#include <stdio.h>

int main() {
    int age;
    char *classification;


    printf("Enter the age: ");
    scanf("%d", &age);


    classification = (age < 6) ? "Not under employment category" :
                    (age < 18) ? "Minor, cannot be employed" :
                    (age < 50) ? "Can be employed" :
                    "Retirement age";


    printf("Classification: %s\n", classification);

    return 0;
}
