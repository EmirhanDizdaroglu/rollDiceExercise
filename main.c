#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define max1 10
#define max2 50
#define max3 100

enum difficulty {EASY = 1, MEDIUM=2, HARD=3};

int generateRandomNumber(int choice){
int random;
    if(choice == EASY){
        random = rand()% (max1-1+1)+1;

    }
    if(choice ==MEDIUM){
        random= rand()%(max2-1+1)+1;

    }

if(choice == HARD){
    random= rand()%(max3-1+1)+1;

}
return random;
}

void playNumberGuessingGame(int random){
    int guess;
    int trycounter=1;
do{
    printf("\nPlease guess your number:");
    scanf("%d", &guess);
    trycounter++;
    if( guess > random){
        printf("Your guess is too high\n");
    }
    if(guess < random){
        printf("Your guess is too low\n");
    }
}while(guess != random);

    printf("Correct guess! The number is %d\n", guess);
    printf("Your num of try: %d", trycounter);
}


int main(){
    srand(time(0));
    printf("for EASY mode select 1\nfor MEDIUM mode select 2\nfor HARD mode select 3\n");
    printf("select your difficulty:");
    int difficulty;
    scanf("%d",&difficulty);

    if(difficulty == 1){
    generateRandomNumber(EASY);

    }

    if(difficulty == 2){

        generateRandomNumber(MEDIUM);
    }

    if(difficulty ==3){

        generateRandomNumber(HARD);
    }
    if(difficulty >3 || difficulty <1 ){
        printf("Invalid choice! Try again.\n");
        printf("select your difficulty:");
        scanf("%d",&difficulty);
    }
    generateRandomNumber(difficulty);
    int num = generateRandomNumber(difficulty);
    playNumberGuessingGame(num);


    return 0;
}
