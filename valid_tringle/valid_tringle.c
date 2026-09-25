#include <stdio.h>
#include <cs50.h>

bool valid_tringle(float x, float y, float z);

bool valid_tringle(float y, float x, float z)
{
    if (y <= 0 || x <= 0 || z <= 0)
    {
        printf("Not valid");
        return false;
    }
    if ((y + x) < z || (x + z) < y || (y + z) < x)
    {
        printf("not valid\n");
        return false;
    }
    
printf("Valid\n");
return true;


}