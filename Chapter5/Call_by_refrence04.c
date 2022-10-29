// C-language-Practice Code
// github link : (https://github.com/Abdul-muheet-ghani/C-Language-Practice.git)
// E-MAIL      : (aghani@students.uit.edu)
// Description : Hands on Practice of System C
// Author      : Abdul Muheet Ghani 
// Date        : 29/OCT/2022




#include <stdio.h>

int sum(int *a , int *b);
int swap_wrong(int a , int b);

int main(){
    // variables 
    int a = 3;
    int b = 5;
    printf("\nValue before function calling a = %d , and b = %d" , a , b);
    printf("\nValue of swap_wrong   = %d" ,swap_wrong(3 , 5)); 
    printf("\nValue after function calling a = %d and b = %d" , a , b);
    printf("\nValue of sum          = %d" ,sum(&a,&b));
    printf("\nValue after function calling a = %d and b = %d" , a , b);
    return 0;
}

int swap_wrong(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int sum(int *a, int *b){
    int c;
    c = *a + *b;
    *a = 1234;
    *b = 4567;
    return c;
}