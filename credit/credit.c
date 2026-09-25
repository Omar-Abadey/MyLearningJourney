#include <stdio.h>
#include <cs50.h>

void check(long credit);
long credit;

long main (void)
{
    do 
    {
        credit = get_long("Credit Number: ");
    }
    while(credit < 4999999999999 || credit > 5599999999999999);

    check(credit);

}

void check(long credit)
{
    for (int i = 0; i < credit; i++ )
    {
        
    }
}