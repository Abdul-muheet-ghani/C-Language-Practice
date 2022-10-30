// C-language-Practice Code
// github link : (https://github.com/Abdul-muheet-ghani/C-Language-Practice.git)
// E-MAIL      : (aghani@students.uit.edu)
// Description : Hands on Practice of System C
// Author      : Abdul Muheet Ghani 
// Date        : 28/OCT/2022






#include <stdio.h>
int main(){
    // variables 
    int arr[5] = {12,23,34,45,67};
    int *ptr = arr;//also equal to int ptr = arr;
    ptr = ptr + 2;
    if(ptr == &arr[2]){
        printf("success");
    }
    else{
        printf("unsuccess");
    }
    return 0;
}