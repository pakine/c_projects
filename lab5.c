#include <stdio.h>

// หา BMI
// a/b^2

int main( void){

    float a ; // ค่ามวล
    float b ; // ค่าสูง

    printf( "Enter weight (kg) >> ");
    scanf( "%f" , &a );

    printf( "Enter Hight (cm) >> ");
    scanf( "%f" , &b );

    b = b/100 ;

    float bmi = a/(b*b)  ; // สูตร

    printf( "Mass = %.0f \nHigh = %.0f \nBMI = %.2f" , a , b*100 ,bmi ) ;

}