#include <stdio.h>
#include <stdlib.h>

// hw1

int main(void){
    int arr[10] = {0};
    float arr2[100];
    int arr3[20];
    float arr4[5][10];
    char str[20];
    char word[50];

    // hw2

    for (int i = 0; i < 100; i++){
        arr2[i] = 0;
    }

    // hw3
    for (int i = 0; i < 20; i++){
        arr3[i] = i;
    }

    // hw4
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 10; j++){
            arr4[i][j] = i * j;
        }
    }

    // hw5
    printf("Enter a string: ");
    fgets(str, 20, stdin);
    str[strcspn(str, "\n"] == '\0';
    // or
    // scanf("%19s", str);
    printf("Length: %d", strlen(str));


    // hw 6
    printf("Enter a word (max 50 chars, include spaces): ");
    fgets(word, 50, stdin);
    word[strcspn(word, "\n"] == '\0'
    for (int i = 0; i < str(len); i++){
        if (word[i] == ' '){
            word[i] = '_';
        }
    }

    printf("%s", word);

    return 0;
}
