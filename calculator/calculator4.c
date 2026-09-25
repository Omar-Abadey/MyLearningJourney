#include <stdio.h>
#include <cs50.h>

int main(void){
    int x = get_int("What's x? \n");
    int y = get_int("what's y? \n");

    printf("%.3f\n", (float)x / y);
}