#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// q1

int main(void){
    printf("Enter an integer: ");
    int num;
    int prev = -1;
    int count = 0;
    do {
        scanf("%d", &num);
        if (num == prev){
            count++;
            printf("You can't enter the same number twice!\n");
            break;
        }
        prev = num;
        count++;
    } while(num != 0);
    printf("You entered %d numbers", count);

    return 0;
}


// q2

// i * ? = num

int main(void){
    printf("Enter an integer: ");
    int num;
    scanf("%d", &num);
    for (int i = 1; i<=sqrt(num); i++){
        if(num % i == 0){
            printf("%d ", i);
            if (i != num/i){
                printf("%d ", num/i);
            }
        }
    }
    return 0;
}

// q3

int main(void){
    srand(time(NULL));
    int secret = rand() % 100 + 1;
    int attempts = 0;
    printf("Guess the number between 1-100: ");
    int num;
    do {
        scanf("%d", &num);
        if(attempts == 10){
            printf("Ran out of attempts.");
        }
        else if(num == secret){
            printf("Correct! You took %d attempts", attempts);
        }
        else if (num < secret){
            printf("Higher\n");
            attempts++;
        }
        else {
            printf("Lower\n");
            attempts++;
        }
    } while (num != secret);

    return 0;
}


// q4

int main(void){
    printf("Enter a line of text: ");
    char text;
    int digits = 0, upper = 0, lower = 0;
    do {
        scanf("%c", &text);
        if(text >= '0' && text <= '9'){
            digits++;
        }
        else if(text >= 'A' && text <= 'Z'){
            upper++;
        }
        else if(text >= 'a' && text <= 'z'){
            lower++;
            text = text - 32;
        }
        printf("%c", text);
    } while(text != '\n');
    printf("Your string featured %d digits, %d upper case letters, and %d lower case letters",  digits, upper, lower);

    return 0;
}
