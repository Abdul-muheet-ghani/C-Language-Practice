// C-language-Practice Code
// github link : (https://github.com/Abdul-muheet-ghani/C-Language-Practice.git)
// E-MAIL      : (aghani@students.uit.edu)
// Description : Hands on Practice of System C
// Author      : Abdul Muheet Ghani 
// Date        : 29/OCT/2022






#include <stdio.h>
void avg_sum(int a, int b, int *sum, float *avg);

void avg_sum(int a, int b, int *sum, float *avg){
    *sum = a + b;
    *avg = (float)((a + b)/2);                      //type cast float
}

int main(){
    // variables 
    int a,b,sum;
    float avg;
    printf("\nEnter Number a = ");
    scanf("%d" , &a);
    printf("\nEnter Number b = ");
    scanf("%d" , &b);
    printf("\nThe Addresee of sum = %ls and average = %f", &sum, &avg);
    avg_sum(a, b, &sum, &avg);
    printf("\nThe Value of sum = %d and average = %f", sum, avg);
    return 0;
}