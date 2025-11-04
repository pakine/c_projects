#include <stdio.h>

void main(void){
    float area;
    int base ;
    int high ;
    printf("Enter Base:");
    scanf("%d", &base);
    printf("Enter High:");
    scanf("%d", &high);
    area = 0.5* base*high;
    //printf("base = %d \n", base);
    //printf(" high = %d \n",  high);
    //printf("area = %.2f \n", area);
    printf("Base = %d \nHigh = %d \nArea = %.3f \n", base, high, area);
}