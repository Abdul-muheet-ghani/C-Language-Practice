// C-language-Practice Code
// github link : (https://github.com/Abdul-muheet-ghani/C-Language-Practice.git)
// E-MAIL      : (aghani@students.uit.edu)
// Description : Hands on Practice of System C
// Author      : Abdul Muheet Ghani 
// Date        : 28/OCT/2022






#include <stdio.h>
int main(){
    // variables 
    char str_1[43];
    char str_2[43];
    char c ;
    int i = 0;

    printf("Enter the first string ");
    scanf("%s", str_1);
    printf("\nEnter the second string character by character:\n");
    fflush(stdin);

    while(c != '\n'){
        fflush(stdin);
        scanf("%c", &c);
        str_2[i] = c;
        i++;
    }

    str_2[i] = '\0';
    printf("String 1 = %s and the 2nd string = %s", str_1, str_2);

    return 0;
}