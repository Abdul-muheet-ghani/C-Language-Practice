// C-language-Practice Code
// github link : (https://github.com/Abdul-muheet-ghani/C-Language-Practice.git)
// E-MAIL      : (aghani@students.uit.edu)
// Description : Hands on Practice of System C
// Author      : Abdul Muheet Ghani 
// Date        : 29/OCT/2022






#include <stdio.h>
#include <string.h>

struct employee{   //=> declares the new user define data type
    int ssalary;
    float num;
    char str[100];
};
int main(){
    // variables 
    struct employee e1;  //structure variable
    e1.ssalary = 12;     // "." member operator
    e1.num = 3.23;
    strcpy(e1.str, "muheet");
    printf("\nsalary = %d", e1.ssalary);
    printf("\nsalary = %f", e1.num);
    printf("\nsalary = %s", e1.str);
    return 0;
}