// C-language-Practice Code
// github link : (https://github.com/Abdul-muheet-ghani/C-Language-Practice.git)
// E-MAIL      : (aghani@students.uit.edu)
// Description : Hands on Practice of System C
// Author      : Abdul Muheet Ghani 
// Date        : 29/OCT/2022






#include <stdio.h>
#include <string.h>

typedef struct employee{   //=> declares the new user define data type
    int ssalary;
    float num;
    char str[100];
} emp;

void show(emp employ){
    printf("\nsalary = %d", employ.ssalary);
    printf("\nsalary = %f", employ.num);
    printf("\nsalary = %s", employ.str);    
}


int main(){
    // variables 
    emp e1;  //structure variable
    emp *ptr;

    ptr = &e1;
    printf("Enter salary : ");
    scanf("%d", &ptr->ssalary);
    printf("\nEnter number in float : ");
    scanf("%f", &ptr->num);
    printf("Enter name : ");
    scanf("%s", ptr->str);
    show(e1);
    return 0;
}