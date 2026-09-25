#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int cal(string word);

int main(void)
{
    string player1 = get_string("player 1 enter a word: ");
    string player2 = get_string("player 2 enter a word: ");

// Loop through each character of player1
for (int i = 0, n = strlen(player1); i < n; i++)
{
    // Lowercase the character and assign it back to the exact same spot
    player1[i] = tolower(player1[i]); 
}

// Loop through each character of player1
for (int i = 0, n = strlen(player2); i < n; i++)
{
    // Lowercase the character and assign it back to the exact same spot
    player2[i] = tolower(player2[i]); 
}

    int score1 = cal(player1);
    int score2 = cal(player2);
    printf("%i\n",score1);
    printf("%i\n",score2);

    if (score1> score2)
    {
        printf("player 1 wins\n");
    }
    else if (score1<score2)
    {
        printf("player 2 wins\n");
    }
    else
    {
        printf("tie!\n");
    }

}

int cal(string word)
{
    int letters[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    int total = 0;
    for (int i = 0, n = strlen(word); i < n; i++)
    {
        if (word[i]>'z'+1||word[i]<'a'-1)
        {
            continue;
        }
        int score[n];
        score[i]= letters[word[i]-'a'];
        total = total + score[i];
    }
    return total;
}