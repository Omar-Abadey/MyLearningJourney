# This is a "guess the number" game
import random
secretNumber = random.randint(1,20)
print("I'm thinking of a number between 1 and 20")

# ask the player to guess 6 times
for guessesTaken in range(1,7):
    print("take a guess")
    guess = int(input())
    if guess < secretNumber:
        print("Your guess is too low")
    elif guess > secretNumber:
        print("Your guess is too high")
    else:
        break # this is the right guess

if guess == secretNumber:
    print ('Good job! You guessed my number in ' + str(guessesTaken) + ' guesses!')
else:
    print("Nope. The number I was thinking of was " + str(secretNumber))
