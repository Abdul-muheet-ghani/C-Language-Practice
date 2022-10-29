// C-language-Practice Code
// github link : (https://github.com/Abdul-muheet-ghani/C-Language-Practice.git)
// E-MAIL      : (aghani@students.uit.edu)
// Description : Hands on Practice of System C
// Author      : Abdul Muheet Ghani 
// Date        : 29/OCT/2022






#include <stdio.h>
int main(){
    // variables 
    int i = 34;
    int *j = &i;
    printf("value of i = %d\n",   i);
    printf("value of j = %d\n",   *j);
    printf("Address of i = %d\n", &i);
    printf("Address of j = %d\n",  j);
    printf("Address of j = %d\n",   &j);
    printf("Value at address j = %d",   *(&j));
    return 0;
}