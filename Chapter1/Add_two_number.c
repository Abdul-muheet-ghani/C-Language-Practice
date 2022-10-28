// C-language-Practice Code
// github link : (https://github.com/Abdul-muheet-ghani/C-Language-Practice.git)
// E-MAIL      : (aghani@students.uit.edu)"
// Description : Hands on Practice of System C
// Author      : Abdul Muheet Ghani 
// Date        : 28/OCT/2022

#include <stdio.h>

int main(){
    int a,b;
    printf("Enter number a = ");
    scanf("%d" , &a);          // taking input and save it on the address of a, Address of operator

    printf("Enter number b = ");
    scanf("%d" , &b);          // taking input and save it on the address of b, Address of operator

    printf("The sum of a + b = %d", a + b);
}