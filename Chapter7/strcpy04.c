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
    char *source = "Muheet";
    char target[45];
    strcpy(target, source);
    printf("The source = %s", target);
    return 0;
}