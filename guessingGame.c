#include <stdio.h>
#include <stdlib.h>


int main() {

    int secretNumber = 5;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    int outofGuesses = 0;

    while((guess != secretNumber) && (guessCount != guessLimit)){
        printf("Enter a number: ");
        scanf("%d", &guess);
        
        if (guess == secretNumber) {
            printf("You win!");
        }
        
        guessCount++;
    } 

    printf("Out of guesses, you lose!");
    
    return 0;
}