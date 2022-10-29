// C-language-Practice Code
// github link : (https://github.com/Abdul-muheet-ghani/C-Language-Practice.git)
// E-MAIL      : (aghani@students.uit.edu)
// Description : Hands on Practice of System C
// Author      : Abdul Muheet Ghani 
// Date        : 29/OCT/2022






#include <stdio.h>

float average(int a, int b, int c);
int main(){
    // variables 
    int a,b,c;
    printf("Enter the value of a = ");
    scanf("%d" , &a);
    printf("\nEnter the value of b = ");
    scanf("%d" , &b);
    printf("\nEnter the value of c = ");
    scanf("%d" , &c);
    float final_output = average(a , b , c);
    printf("Final otput average value = %f" , final_output);
    return 0;
}

float average(int a, int b, int c){
    float result;
    result = (float)( a + b + c)/3;
    return result;
}