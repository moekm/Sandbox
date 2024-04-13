#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

// prototypes
int checkTutorial (char input[]);
void runTutorial();

int main() {

    char inputTutorial[5];
    bool tutorial;

    printf("Welcome To Guess The Number!\n");
    printf("Would you like to learn how this game works?\ntype:\tyes(y) or no(n):\t");
    scanf("%s", &inputTutorial);

    // checks if the user skipped the tutorial
    if (checkTutorial(inputTutorial) == 0){ // if 0 then user said yes
        runTutorial();
    }


    /*
    * Game Core
    */
    int triesLeft = 5;
    int userAnswer;
    int genNum;
    int playerStatus = 0;

    char winMSG[] = "YAAY! You WON!";
    char loseMSG[] = "OH NO! Better Luck Next Time (:";
    
    srand(time(0)); // generates a random "seed number"
    genNum = rand() % 100; // give a random number upto 100 (not totally random but hey, it works!)
    // printf("DEV TOOL PANEL:\t %d\n", genNum);

    do{
   printf("Tries Left:\t %d \n", triesLeft);
   printf("Answer:\t");
   scanf("%d", &userAnswer);

    if (userAnswer == genNum){
        playerStatus = 1; // true
        break;
    }
    triesLeft--;
    } while(triesLeft > 0);

    // Display Message
    if (playerStatus){
    printf("%s", winMSG);
    } else{
    printf("%s", loseMSG);
    }
    
    return 0;
}

int checkTutorial (char input[]){ 
    char lowerInput[5];

  // make input lowercase
  for (int i = 0; i < strlen(input); i++) {
   lowerInput[i] = tolower(input[i]);
  }

    // <= 2 to count the '\0'
    if (strlen(lowerInput) <= 2 && lowerInput[0] == 'y' || strcmp(lowerInput, "yes") == 0){
        return 0;
    }
}

void runTutorial(){

    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF); // clears the buffer from scanf
    printf("Ok.. here's how it works (press enter to continue):\n");
    getchar();

    printf("The program will generate a random number btween 1 - 100\n");
    getchar();

    printf("You have \"5\" tries to guess the number\n");
    getchar();

    printf("If you guessed correctly you WIN!\n");
    getchar();

     printf("If not... well try again :) \n");
    getchar();

    printf("Example (1): \n");
    printf("Tries Left:\t5\nAnswer:\t82\n\nTries Left:\t4\nAnswer:\t13\n\nTries Left:\t3\nAnswer:\t43\n\nTries Left:\t...\nAnswer:\t...\n\n");
     printf("Tries Left: 0\n");
    printf("Oh no! Better Luck Next Time (:");
    getchar();

    printf("\nExample (2): \n");
    printf("Tries Left:\t5\nAnswer:\t22\n");
    printf("\nCorrect Answer:\t22\nYour Answer:\t22\n\nYAAAY YOU GOT IT!");
    getchar();

    printf("\t\nReady?\t(Press Enter To Play)\n");
    getchar();
}