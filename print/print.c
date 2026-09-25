#include <stdio.h>
#include <cs50.h>

void print_bychar(string input);

int main(void)
{
    string input = get_string("Input: ");
   
    print_bychar(input);
}

void print_bychar(string input)
{
    for (int i = 0; input[i] != '\0';i++)
    {
        printf("%c", input[i]);
    }
    printf("\n");
}