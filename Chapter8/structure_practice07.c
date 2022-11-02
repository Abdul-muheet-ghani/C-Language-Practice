// C-language-Practice Code
// github link : (https://github.com/Abdul-muheet-ghani/C-Language-Practice.git)
// E-MAIL      : (aghani@students.uit.edu)
// Description : Hands on Practice of System C
// Author      : Abdul Muheet Ghani 
// Date        : 29/OCT/2022


typedef struct sum{
    int x,y;
} summer;

summer sumVector(summer s_1, summer s_2){
    summer result;
    result.x = s_1.x + s_1.y;
    result.y = s_2.x + s_2.y;
    return result;
}


#include <stdio.h>
int main(){
    // variables 
    
    summer su_1,su_2;

    su_1.x = 5;
    su_1.y = 9;

    su_2.x = 5;
    su_2.y = 90;

    summer sum_o = sumVector(su_1, su_2);

    printf("Output = %d, %d", sum_o.x ,sum_o.y);
    return 0;
}