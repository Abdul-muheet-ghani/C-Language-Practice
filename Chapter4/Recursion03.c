// C-language-Practice Code
// github link : (https://github.com/Abdul-muheet-ghani/C-Language-Practice.git)
// E-MAIL      : (aghani@students.uit.edu)
// Description : Hands on Practice of System C
// Author      : Abdul Muheet Ghani 
// Date        : 29/OCT/2022






#include <stdio.h>

int factorial (int x);
int main(){
    // variables 

    int x ;
    printf("Enter the value of Factorial = ");
    scanf("%d" , &x);
    int c = factorial(x);
    printf("\nOutput value of factorial = %d " , c);
    return 0;
}

int factorial(int x){
   if(x == 1 || x == 0){
    return 1;
   }
   else{
    return x * factorial(x - 1);
   }
   
}