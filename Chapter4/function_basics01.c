// C-language-Practice Code
// github link : (https://github.com/Abdul-muheet-ghani/C-Language-Practice.git)
// E-MAIL      : (aghani@students.uit.edu)
// Description : Hands on Practice of System C
// Author      : Abdul Muheet Ghani 
// Date        : 29/OCT/2022






#include <stdio.h>

void display();  //function prototype
int main(){
    // variables 
    
    printf("Before Display ");      // library function
    display();   //function call
    return 0;
}

// dunction definition
void display(){                //user define function
    printf("\nin function ");
}