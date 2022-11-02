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

void show(struct employee emp){
    printf("\nsalary = %d", emp.ssalary);
    printf("\nnumber = %f", emp.num);
    printf("\nname = %s",   emp.str);
}

//function is call by value

int main(){
    // variables 
    struct employee e1;  //structure variable // "." member operator
    printf("Enter salary : ");
    scanf("%d", &e1.ssalary);
    printf("\nEnter number in float : ");
    scanf("%f", &e1.num);
    printf("Enter name : ");
    scanf("%s", e1.str);
    show(e1);
    return 0;
}