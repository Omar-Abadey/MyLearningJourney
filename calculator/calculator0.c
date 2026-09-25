#include <stdio.h>
#include <cs50.h>

int main (void){
    int x = get_int("Enter X: ");
    int y = get_int("Enter y: ");
    
    int z = x + y;
    printf("result: %i\n", z);

}