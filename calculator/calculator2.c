#include <stdio.h>
#include <cs50.h>

int main(void){
    long dollar = 1;
    while (true){ 
        char O = get_char("Here is %i dollar, double it and give it to next person?\n", dollar);
        if (O == 'y'){
            dollar *= 2;
    }
    else{
        break;
    }

    }
    printf("Here's %i\n", dollar);
}