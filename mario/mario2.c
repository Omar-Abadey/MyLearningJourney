#include <stdio.h> 
#include <cs50.h>

void print_row(int hight);

int main(void)
{
    int hight;
    do 
    {
        hight = get_int("hight: ");
    }

    while (hight < 1);

    for (int i = 1; i <= hight; i++)
    {
        print_row(i);
    }
}

void print_row(int hight)
{
    // print bricks by countdown
    for (int i = 0; i < hight; i++)
    {
        printf("#");
    }
    printf("\n");
}