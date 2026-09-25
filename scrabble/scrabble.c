#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int calculate(string word);

int main(void)
{
    string word1 = get_string("Player 1 enter a word: ");
    string word2 = get_string("Player 2 enter a word: ");

    int score_Player1 = calculate(word1);
    int score_player2 = calculate(word2);

    if (score_Player1<score_player2)
    {
        printf("Player 1 Wins\n");
    }
    else if (score_player2 < score_Player1)
    {
        printf("Player 2 Wins\n");
    }
    else{
        printf("No one Wins, equalation.\n");
    }
}

int calculate(string word)
{
     int letters[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    
    for (int i = 0, n = strlen(word); i < n; i++)
    {
        int scores[n];
        scores[i]  = letters[word[i]- 'A'];
        printf("%i\n",scores[i]);
    }
}