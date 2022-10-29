// C-language-Practice Code
// github link : (https://github.com/Abdul-muheet-ghani/C-Language-Practice.git)
// E-MAIL      : (aghani@students.uit.edu)
// Description : Hands on Practice of System C
// Author      : Abdul Muheet Ghani 
// Date        : 29/OCT/2022





#include <stdio.h>


//Call by value means when function is call it will not cahnge the
//value of main() variable like a and b if it's call by refrence then
//once the function is called it changes the value of addresses
int sum(int a , int b);

int main(){
    // variables 
    int a = 3;
    int b = 5;
    printf("\nValue before function calling a = %d and b = %d" , a , b);
    printf("\nValue of sum          = %d" ,sum(a,b));
    printf("\nValue after function calling a = %d and b = %d" , a , b);
    return 0;
}

int sum(int a, int b){
    int c;
    c = a + b;
    a = 1234;
    b = 4567;
    return c;
}