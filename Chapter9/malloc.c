// C-language-Practice Code
// github link : (https://github.com/Abdul-muheet-ghani/C-Language-Practice.git)
// E-MAIL      : (aghani@students.uit.edu)
// Description : Hands on Practice of System C
// Author      : Abdul Muheet Ghani 
// Date        : 28/OCT/2022






#include <stdio.h>
#include <stdlib.h>

int main(){
    // variables 
    int *ptr;
    ptr = (int *)malloc(6 * sizeof(int));
    for(int i=0; i<7; i++){
        printf("Enter the value of Location %d: =",i+1);
        scanf("%d", &ptr[i]);
    }
    for(int i=0; i<7; i++){
        printf("\nThe value of Location %d: = %d",i+1, ptr[i]);
    }
    return 0;
}