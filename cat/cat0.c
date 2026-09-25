#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int i = 0;
    int times = get_int("How much times ? ");

    while (i < times)
    {
        printf("meow\n");
        i++;
    }

}
