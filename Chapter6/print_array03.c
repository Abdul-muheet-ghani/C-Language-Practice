// C-language-Practice Code
// github link : (https://github.com/Abdul-muheet-ghani/C-Language-Practice.git)
// E-MAIL      : (aghani@students.uit.edu)
// Description : Hands on Practice of System C
// Author      : Abdul Muheet Ghani 
// Date        : 28/OCT/2022






#include <stdio.h>

void printArray(int *ptr, int a){
    for(int i=0; i<a; i++){
        printf("\nprinting array at index: %d = %d", i+1, *ptr++);
    }
}

void print_Array(int ptr[], int a){
    for(int i=0; i<a; i++){
        printf("\nprinting array at index: %d = %d", i+1, *ptr++);
    }
}

int main(){
    // variables 
    int arr[] = {123,123,234,345,789};
    printArray(arr, 5);
    printf("\n\n");
    print_Array(arr, 5);
    return 0;
}