#include <stdio.h>
#include <cs50.h>

void print_row(int hight);

int main (void)
{
    int hight;
    do 
    {
        hight = get_int("Hight: ");
    }
    while(hight < 1);

    for (int i = 0; i < hight; i++)
    {
        print_row(hight);
    }
}

void print_row(int hight)
{
    for (int i = 0; i < hight; i++)
    {
        printf("#");
    }
    printf("\n");
}