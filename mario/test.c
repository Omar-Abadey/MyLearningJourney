#include <cs50.h>
#include <stdio.h>

void print_row(int lenght);
int height; 

int main(void)
{
    do 
    {
        height = get_int("Height: ");
    }
    while(height < 1 || height > 8);

    for (int lenght = 1; lenght <= height; lenght++)
    {
        print_row(lenght);
    }
}

void print_row(int lenght)
{
    for (int i = 0; i < height - lenght; i++)
    {
        printf(" ");
    }
    for (int j = 0; j < lenght; j++)
    {
        printf("#");
    }
    printf("  ");
    for (int k = 0; k < lenght; k++)
    {
        printf("#");
    }    
    printf("\n");
}