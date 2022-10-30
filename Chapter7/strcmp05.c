// C-language-Practice Code
// github link : (https://github.com/Abdul-muheet-ghani/C-Language-Practice.git)
// E-MAIL      : (aghani@students.uit.edu)
// Description : Hands on Practice of System C
// Author      : Abdul Muheet Ghani 
// Date        : 28/OCT/2022






#include <stdio.h>
#include <string.h>

int main(){
    // variables 
    char *str_1 = "Muheet";
    char *str_2 = "Muheet";
    int out = strcmp(str_1, str_2);
    printf("The source = %d", out);
    return 0;
}