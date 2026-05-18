#include <stdio.h>
#include <stdlib.h>


// q1

int main(void){
    FILE *filePtr;
    float float1, float2;
    char line[100];

    if((filePtr = fopen("floats.txt", "r")) == NULL){
        perror("File not found");
        exit(-1);
    }

    while((fgets(line, sizeof(line), filePtr)) != NULL){
        sscanf(line, "%f %f", &float1, &float2);
        printf("The floats are: %f/t%f", float1, float2);
    }

    fclose(filePtr);

    return (0);
}


// q2

int main(void){
    FILE *filePtr;
    char items[1000][100];
    float prices[1000];
    int i = 0;

    if((filePtr = fopen("prices.txt", "r")) == NULL){
        perror("File not found");
        exit(-1);
    }

    while((fscanf(filePtr, "%s %f", items[i], &prices[i])) == 2){
        i++;
    }

    printf("ITEM    PRICES\n");
    printf("==============\n");
    for (int q = 0; q<i; q++){
        printf("%s\t$%.2f\n", items[q], prices[q]);
    }

    fclose(filePtr);

    return (0);
}


// q3

int main(void){
    FILE *filePtr;
    int num = 1;

    if((filePtr = fopen("numbers.txt", "w")) == NULL){
        perror("File not found");
        exit(-1);
    }

    printf("Enter integers: ");

    do {
        scanf("%d", &num);
        while(getchar() != '\n');
        if (num != 0){
            fprintf(filePtr, "%d\n", num);
        }
    }
    while(num != 0);

    fclose(filePtr);

    return(0);
}


