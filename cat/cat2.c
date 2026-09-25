#include <stdio.h>
#include <cs50.h>

int main (void)
{
    // Prompt the user for times and check it
    int times;
    do
    {
        times = get_int("How much times ? ");
    }
    while (times <= 0);

    // Meow times
    for (int i = 0; i < times; i++)
    {
        printf("meow\n");
    }
}
