// C-language-Practice Code
// github link : (https://github.com/Abdul-muheet-ghani/C-Language-Practice.git)
// E-MAIL      : (aghani@students.uit.edu)
// Description : Hands on Practice of System C
// Author      : Abdul Muheet Ghani 
// Date        : 23/NOV/2022






#include <stdio.h>     //include std library supporting for fopen and other function
int main(){            //Entry point to program
    FILE *fptr;
    char item,data[256];
    fptr = fopen("sample_out","r");
    item = fread(data,1,1,fptr);

    item = fwrite(data,1,1,fptr);
    printf("Something %c",item);
    return 0;
}