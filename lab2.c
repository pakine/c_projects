#include <stdio.h>

void main(void){
    int age=15;
    char name[50]="pakinee theptawee";
    char gender = 'w';
    float gpa=3.59;

    printf("My neme  %s \n", name); //แสดงข้อความ string
    printf("I'm %d \n", age); //เลขจำนวนเต็ม %d decimal
    printf("Grade %f \n", gpa);
    printf("Gender %c", gender);
    return 0;
}