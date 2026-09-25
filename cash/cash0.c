#include <stdio.h> 
#include <cs50.h>
 
void coins_number(int cash);
int cash;


int main (void)
{
    do
    {
        cash = get_int("Cash: ");
    }
    while(cash < 0);

    coins_number(cash);
}

void coins_number(int cash)
{
    // if the number is greater than 25, divide it on 25 and save the reminder
    int reminder1, reminder2, reminder3, reminder4;
    if (cash > 25)
    {
        reminder1 = cash / 25;
        reminder2 = (cash % 25) / 10;
        reminder3 = ((cash % 25) % 10) / 5; 
        reminder4 = (((cash % 25) % 10) % 5) / 1;
        printf("%i\n", reminder1 + reminder2 + reminder3 + reminder4);
    }
    
    // else if the number greater than 10, divide it on 10 and save the reminder
    else if (cash > 10)
    {
        reminder1 = (cash % 25) / 10;
        reminder2 = ((cash % 25) % 10) / 5;
        reminder3 =  (((cash % 25) % 10) % 5) / 1;
        printf("%i\n", reminder1 + reminder2 + reminder3);
    }
    // if the number greater than 5, divide it on 5 and save the reminder
    else if (cash > 5)
    {
        reminder1 = ((cash % 25) % 10) / 5;
        reminder2 = (((cash % 25) % 10) % 5) / 1;
        printf("%i\n", reminder1 + reminder2);
    }
    // if the number greater than 1, divide the reminder on 1
    else
    {
        reminder1 = (((cash % 25) % 10) % 5) / 1;
        printf("%i\n", reminder1);
    }
}