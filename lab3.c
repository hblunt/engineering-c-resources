#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

// q1

int main(void){
    printf("Enter an integer: ");
    int num;
    int count = -1;
    do {
        scanf("%d", &num);
        count++;
    } while(num != 0);
    printf("You entered %d numbers", count);

    return 0;
}


// q2

int main(void){
    printf("Enter an integer: ");
    int num;
    scanf("%d", &num);
    for (int i = 2; i<=sqrt(num); i++){
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
    printf("Guess the number between 1-100: ");
    int num;
    do {
        scanf("%d", &num);
        if(num == secret){
            printf("Correct!");
        }
        else if (num < secret){
            printf("Higher\n");
        }
        else (num > secret){
            printf("Lower\n");
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
        }
    } while(text != '\n');
    printf("Your string featured %d digits, %d upper case letters, and %d lower case letters",  digits, upper, lower);

    return 0;
}
