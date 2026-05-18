#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// hw1
int main(void){
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    for (int i = 1; i <=1000; i++){
        if (i % num1 == 0 && i % num2 == 0){
            printf("%d\n", i);
        }
    }
    return 0;

    // hw2

    int i = 1;
    for (int count = 0; count < 1000; i++){
        if (i % num1 == && i % num2 == 0){
            printf("%d\n", i);
            count++;
        }
    }
}

// hw3
int main(void){
    srand((unsigned)time(NULL));

    // could also use calloc, but we dont technically need to set anything to 0, so malloc is fine (intiialises with garbage vals)
    float *arr = malloc(100 * sizeof(float));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // hw4
    FILE *filePtr = fopen("floats.txt", "w");
    if (filePtr == NULL) {
        printf("Could not open file.\n");
        free(arr);
        return 1;
    }

    for (int i = 0; i < 100; i++){
        arr[i] = (float)rand() / (float)RAND_MAX;
        fprintf(filePtr, "%f\n", arr[i]);
    }

    // remember to do these!
    free(arr);
    fclose(filePtr);
    return 0;
}

// hw5
// const use just good practice, mainly just to show it is not modified
void mystrcpy(char *dest, const char *src) {
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

// hw6
void strdelete(char *str, char c) {
    char *read = str;
    char *write = str;

    while (*read != '\0') {
        if (*read != c) {
            *write = *read;
            write++;
        }
        read++;
    }
    *write = '\0';
}
