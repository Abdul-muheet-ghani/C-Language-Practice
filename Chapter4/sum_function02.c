// C-language-Practice Code
// github link : (https://github.com/Abdul-muheet-ghani/C-Language-Practice.git)
// E-MAIL      : (aghani@students.uit.edu)
// Description : Hands on Practice of System C
// Author      : Abdul Muheet Ghani 
// Date        : 29/OCT/2022






#include <stdio.h>

// sum take value a and b and return some integer value
int a,b; //global variable
int sum(int a , int b); //function prototype declaation
int main(){
    // variables 
    printf("Enter Value of a = ");
    scanf("%d" , &a);
    printf("Enter Value of b = ");
    scanf("%d" , &b);

    printf("Sum of the a and b = ");
    sum(a , b);
    return 0;
}

int sum(int a , int b){
    int result = a + b;
    printf("%d" , result );
}