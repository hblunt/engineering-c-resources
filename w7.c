#include <stdio.h>
#include <stdlib.h>


// hw1

int main(void){
    FILE *filePtr;

    if((filePtr = fopen("file.txt", "r")) == NULL){
        perror("File not found");
        exit(-1);
    }

    fclose(filePtr);

    return (0);
}


// hw2

int main(void){
    FILE *filePtr;

    if((filePtr = fopen("data.txt", "w")) == NULL){
        perror("File not found");
        exit(-1);
    }

    for(int i = 1; i <= 10; i++){
        fprintf(filePtr, "%d\n", i);
    }

    fclose(filePtr);

    return (0);
}

// hw3

int main(void){
    FILE *filePtr;

    int num;

    if((filePtr = fopen("data.txt", "r")) == NULL){
        perror("File not found");
        exit(-1);
    }

    while((fscanf(filePtr, "%d", &num)) == 1){
        printf("%d\n", num);
    }

    fclose(filePtr);

    return (0);
}


// hw4

int countFile(char filename[100]){
    FILE *filePtr;
    int i = 0;

    if((filePtr = fopen(filename, "r")) == NULL){
        perror("File not found");
        exit(-1);
    }

    while((fgetc(filePtr)) != EOF){
        i++;
    }

    fclose(filePtr);

    return i;
}

// hw5

int fileSize(char filename[100]){
    FILE *filePtr;
    int i = 0;

    if((filePtr = fopen(filename, "r")) == NULL){
        perror("File not found");
        exit(-1);
    }

    fseek(filePtr, 0, SEEK_END);
    long size = ftell(filePtr);

    fclose(filePtr);

    return size;
}

// hw6

int main(void){
    FILE *filePtr;
    float nums[50];
    nums[0] = 0;
    for (int i = 1; i<50; i ++){
        nums[i] = nums[i-1] + 0.5;
    }

    if((filePtr = fopen("floats.dat", "wb")) == NULL){
        perror("File not found");
        exit(-1);
    }

    fwrite(nums, sizeof(float), 50, filePtr);

    fclose(filePtr);

    return (0);
}

