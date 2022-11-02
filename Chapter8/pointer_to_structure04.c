// C-language-Practice Code
// github link : (https://github.com/Abdul-muheet-ghani/C-Language-Practice.git)
// E-MAIL      : (aghani@students.uit.edu)
// Description : Hands on Practice of System C
// Author      : Abdul Muheet Ghani 
// Date        : 29/OCT/2022






#include <stdio.h>
#include <string.h>

struct employee{   //=> declares the new user define data type
    int salary;
    char name[100];
    char type[100];
};

// ptr = &e1
// ptr->salary = 101;    arrow operator in structure to pointer is also used

int main(){
    // variables 
    int i;
    printf("Enter the Number of employee in your company : ");
    scanf("%d", &i);
    struct employee employee_number[i];  //structure variable // "." member operator
    
    for(int j=0; j<i; j++){
        printf("\nEnter the salary of employee %d:", j+1);
        scanf("%d", &employee_number[j].salary);
        printf("\nEnter the name of employee %d:", j+1);
        scanf("%s", employee_number[j].name);
        printf("\nEnter the type i.e(junio,senior etc) of employee %d:", j+1);
        scanf("%s", employee_number[j].type);
    }

    for(int k=0; k<i; k++){
        printf("\nThe salary of employee : %d = %d", k+1, employee_number[k].salary);
        printf("\nThe name of employee : %d = %s", k+1, employee_number[k].name);
        printf("\nThe type i.e(junio,senior etc) of employee : %d = %s", k+1, employee_number[k].type);
    }

    return 0;
}