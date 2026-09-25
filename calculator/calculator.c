#include <stdio.h>
#include <cs50.h>

int main (void){
    int x = get_int("Enter X: \n");
    int y = get_int("Enter y: \n");
    if (x < y){
        printf("x is lss than y\n");
    }
    else if (x > y){
        printf("x is greater than y\n");
    }
    else{
        printf("x is equal to y\n");
    }
}