#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int count_letters(string text);
int count_sen(string text);
int formula(int L, int S);
int count_words(string text);

int main (void)
{
    string text = get_string("Enter a text: ");
    int words = count_words(text);
    int L = (count_letters(text)/words)*100;
    int S = (count_sen(text)/words)*100;
    int result = formula(L,S);
    printf("%i\n",result);

}

int count_words(string text)
{
    int words = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (text[i]== ' ')
        {
            words += 1;
        }
    }
    printf("%i\n", words+1);
    return words + 1;
}

int formula(int L, int S)
{
    int index = 0.0588 * L - 0.296 * S - 15.8;
    // Source - https://stackoverflow.com/a/65788898
// Posted by J. Mehri
// Retrieved 2026-08-08, License - CC BY-SA 4.0

    
    index = (int)(index+0.5);

    return index;
}
int count_sen(string text)
{
    int sen = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (text[i]=='.' || text[i] == '!' || text[i] == '?' || text[i] == ',')
        {
            sen += 1;
        }
    }
    printf("%i\n",sen);
    return sen;
}

int count_letters(string text)
{
    int letters = 0;
    for (int i =0, n=strlen(text); i < n;i++)
    {
        if (isalpha(text[i]))
        {
            letters +=1;
        }
        
    }
    printf("%i\n", letters);
    return letters;
}

