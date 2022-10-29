// C-language-Practice Code
// github link : (https://github.com/Abdul-muheet-ghani/C-Language-Practice.git)
// E-MAIL      : (aghani@students.uit.edu)
// Description : Hands on Practice of System C
// Author      : Abdul Muheet Ghani 
// Date        : 29/OCT/2022






#include <stdio.h>
int main(){
    // variables 
    int i = 123;
    int *ptr;
    int **ptr_ptr;

    ptr = &i;
    ptr_ptr = &ptr;

    printf("The value of i = %d ", **ptr_ptr);
    return 0;
}