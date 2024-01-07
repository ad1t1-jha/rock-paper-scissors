#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <time.h>

int game(char you, char computer) {
    if (you == computer){
        return -1;
    }
    // comp wins = 0
    if ((you == 'r' && computer == 'p') || (you == 'p' && computer == 's')
        || (you == 's' && computer == 'r')){
        return 0;
    } else {
        return 1;
    }
}

int main()
{
    int n;
    char you;
    char computer;
    char result;

    srand(time(NULL));
    n = rand() % 100;

    // comp is rock
    if (n <= 33){
        computer = 'r';
    }
    // comp is paper
    if (n > 33 && n <= 66){
        computer = 'p';
    }
    // comp is scissors
    if (n > 66){
        computer = 's';
    }

    printf("r for rock, p for paper, s for scissors\n");
    scanf(" %c", &you);

    result = game(you, computer);

    if (result == -1){
        printf("It's a Draw!\n");
    }
    else if (result == 0){
        printf("You lost!\n");
    }
    else if (result = 1){
        printf("You won!\n");
    }

    printf("You choose %c and Computer chose %c", you, computer);
    return 0;

}
