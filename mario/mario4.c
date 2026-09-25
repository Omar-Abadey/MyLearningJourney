#include <cs50.h>
#include <stdio.h>

void print_row(int length);
int height;

int main(void)
{
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    for (int i = 0; i < height; i++)
    {
        print_row(i);
    }
}

void print_row(int length)
{
  for (int i = 0; i < height - 1 - length; i++)
    {
        printf(" ");
    }
    for (int j = 0; j <= length; j++)
    {
        printf("#");
    }
    
    printf("   ");

     for (int f = 0; f <= length; f++ )
    {
        printf("#");
    }

    printf("\n");
}