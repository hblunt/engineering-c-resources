#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// q1

int main(void){
    int arr[5];
    int count = 0;

    printf("Enter 5 integers: ");
    for (int i = 0; i<5; i++){
        scanf("%d", &arr[i]);
        if(arr[i] == 0){
            break;
        }
        count++;
    }
    for(int j = 0; j<count;j++){
        printf("%d ", arr[j]);
    }

    return 0;
}


// q2

float average(float array[], int size){
    float sum = 0.0;
    for (int i = 0; i<size; i++){
        sum += array[i];
    }
    return sum / size;
}

// q3

int main(void){
    char word1[100];
    char word2[100];

    printf("Enter two words: ");
    scanf("%s %s", word1, word2);

    printf("String 1 is %d characters long, and string 2 is %d characters long\n", strlen(word1), strlen(word2));
    if (strcmp(word1, word2) == 0){
        printf("They are identical");
    }
    else {
        printf("They are not identical");
    }
}

// q4

int main(void){
    char line[100];
    int spaces = 0;
    int vowels = 0;
    int digits = 0;
    printf("Write me a line of text (100 chars max): ");
    fgets(line, 100, stdin);

    line[strcspn(line, "\n")] = '\0';
    for(int i = 0; i<strlen(line); i++){
        if(line[i] == ' ') spaces++;
        else if (line[i] == 'i' || line[i] == 'a' || line[i] == 'e' || line[i] == 'u' || line[i] == 'o') vowels++;
        else if (line[i] >= '0' && line[i] <= '9') digits++;
    }

    printf("Spaces: %d\nVowels: %d\nDigits: %d", spaces, vowels, digits)

}
