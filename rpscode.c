#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int game(char you, char computer)
{
    if (you == computer)  // if both the user and computer has to choose the same option
        return -1;
    
    if (you == 's' && computer == 'p') // if the users choice is stone/rock and computer choice is paper
        return 0;
    
    else if (you == 'p' && computer == 's') // if users choice is paper anc computer choice is stone/rock
        return 1;
    
    if (you == 's' && computer == 'z') // if the users choice is rock and the computers choice is scissors
        return 1;
    
    else if (you == 'z' && computer == 's') // if the users choice is scissors and computers choice is stone
        return 0;
    
    if (you == 'p' && computer == 'z') // if the users choice is paper and computers choice is scissors
        return 0;
    
    else if (you == 'z' && computer =='p') //if users choice is scissors and computers choice is paper
        return 1;
}

int main()
{
    int n; //stores random number
    char you, computer, result;

    srand(time(NULL)); //chooses the random number everytime
    n = rand() % 100; //makes the random number less than 100, divded it by 100 
    
    if (n < 33) // using probability 100 is divded among rock, paper,scissors

        computer = 's'; // s is denoting stone
    else if (n > 33 && n < 66)
        computer = 'p'; // p is denoting paper
    
    else
        computer = 'z'; // z is denoting scissors
    
    printf("\n\n\n\n\t\t\t\tEnter s for STONE, p for PAPER and z for SCISSORS\n\t\t\t\t\t\t\t");
    
    scanf("%c", &you); // input from the computer
    
    result = game(you, computer); // function call to play the game

    if (result == -1 ) {
        printf("\n\n\t\t\t\tGame Draw!\n");

    }
    else if (result == 1) {
        printf("\n\n\t\t\t\tWow! You have won!\n");

    }
    else {
        printf("\n\n\t\t\t\tOh! You have lost!\n");
    }
        printf("\t\t\t\tYou choose : %c and Computer choose : %c\n", you, computer);
    
    return 0;

}