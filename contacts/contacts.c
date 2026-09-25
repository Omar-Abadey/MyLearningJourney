#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("Enter a name: ");
    int age = get_int("Enter an age: ");
    string phone_number = get_string("Enter a phone number: ");
    string location = get_string("Enter thier location: ");

    printf("New contact: %s, %i, lives in %s and can be reached at %s\n", name, age, location, phone_number);
}