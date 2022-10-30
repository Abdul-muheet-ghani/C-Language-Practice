// C-language-Practice Code
// github link : (https://github.com/Abdul-muheet-ghani/C-Language-Practice.git)
// E-MAIL      : (aghani@students.uit.edu)
// Description : Hands on Practice of System C
// Author      : Abdul Muheet Ghani 
// Date        : 28/OCT/2022






#include <stdio.h>
int main(){
    // variables 
    int marks[5];
    int *ptr;
    ptr = &marks[0];
    for(int i=0; i<5; i++){
        printf("\nEnter the marks of student : %d : ", i+1);
        scanf ("%d", ptr);
        ptr++;
    }

    for(int j=0; j<5; j++){
        printf("\nThe marks of student : %d = %d", j+1, marks[j]);
    }
    return 0;
}