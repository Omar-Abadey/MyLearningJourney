int main(void){
    int height;
    int length;

for (int i = height - 1; i <= height; i++)
    {
        printf(" ");
    }
    for (int j = 0; j <= length; j++)
    {
        printf("#");
    }
    printf("\n");

     for (int f = 0; f <= length; f++ )
    {
        printf("#");
    }


  // الحلقة الخارجية للأسطر
for (int i = 0; i < height; i++)
{
    // 1. حلقة طباعة المسافات
    for (int j = 0; j < height - i - 1; j++)
    {
        printf(" "); // مسافة فارغة
    }

    // 2. حلقة طباعة الرموز #
    for (int k = 0; k <= i; k++)
    {
        printf("#");
    }
    
    
    // 3. الانتقال لسطر جديد بعد نهاية السطر الحالي
    printf("\n");
}
}


    #include <cs50.h>
#include <stdio.h>

void print_row(int length);

int main(void)
{
    int height;
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
    for (int i = 1; i <= length; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf("   ");
        for (int k = 1; k <= i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}
