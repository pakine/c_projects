#include <stdio.h>

int main() {
int score ;

printf("put your socre :");
scanf("%d", &score);

if ( score >= 60 && score <= 100) {
    printf("pass");
}

else {
    printf("fail");
}

 return 0;
} 