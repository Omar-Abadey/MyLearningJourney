#include <stdio.h>
#include <cs50.h>

int main (void)
{
    // Prompt the user for times and check it
    int times;
    while (true)
    {
        times = get_int("How much times ? ");
        if (times > 0)
        {
            break;
        }
    }
    // Meow times
    for (int i = 0; i < times; i++)
    {
        printf("meow\n");
    }

}
