#include <stdio.h>

int main() {
    float w ;
    float h ;


    printf("heigh (m) : ");
    scanf("%f",&h);

    printf("wight (kg):");
    scanf("%f",&w);

    float bmi = w / (h*h);
    printf("bmi = %.2f \n", bmi);

    printf("You are ");

    if(bmi < 18.5) {
        printf("underweight");
    }
    else if (bmi >= 18.5 && bmi <= 24.9) {
        printf("lealthy weight");
    }
    else if (bmi >= 25 && bmi <= 29.9) {
        printf("overweight");
    }
    else if (bmi > 30) {
        printf("obese");
    }
    else if (bmi < 0) {
        printf("error");
    }

    return 0;
}