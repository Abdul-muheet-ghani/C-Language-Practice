// C-language-Practice Code
// github link : (https://github.com/Abdul-muheet-ghani/C-Language-Practice.git)
// E-MAIL      : (aghani@students.uit.edu)
// Description : Hands on Practice of System C
// Author      : Abdul Muheet Ghani 
// Date        : 29/OCT/2022






#include <stdio.h>

// Pointer to a pointer 
// i = 4; address = 234567
// int *j ; value = 234567, address 89101112
// int **k; value = 89101112, address 13141516
// pointer k store address of another pointer which is j

int main(){
    // variables 
    int i = 34;
    int *j = &i;
    int **k = &j;
    printf("value of   i = %d\n",  i);
    printf("value of   j = %d\n", *j);
    printf("value of   k = %u\n",**k);
    printf("Address of i storing address i = %d\n", &i);
    printf("Address of j storing address i = %d\n",  j);
    printf("value   of k storing address j = %d\n", *k);
    printf("Address of k = %d\n",  k);
    printf("Address of j = %d\n", &j);
    printf("Address of k = %d\n", &k);
    return 0;
}