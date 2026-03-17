#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// hw1
int main(void){
    int num = 1;
    while (num < 11){
        printf("%d", num);
        num++;
    }

    do {
        printf("%d", num);
    } while(num < 11);

    for(int i = 0; i < 11; i++){
        printf("%d", num);
    }

    return 0;
}

// hw2

int main(void){
    for(int i = 0; i < 11; i++){
        num = pow(2, i)
        printf("%d\n", num);
    }

    return 0;
}

// hw3

int main(void){
    int ch;
    while((ch = getchar()) < '0' || ch > '9'){
        // wait
    }

    return 0;
}

// hw4

int main(void){
    int sum = 0;
    for(int i = 0; i < 51; i++){
        sum += i;
    }

    return 0;
}

// hw5

int main(void){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(int i = 0; i < num; i++){
        printf("Hello ");
    }

    return 0;
}

// hw6

int main(void){
    printf("Enter an integer: ");
    int num;
    while((num = getchar()) != '7'){}
    printf("Goodbye");
    return 0;
}

// hw6 alt
int main(void){
    printf("Enter an integer: ");
    int num;
    while(1){
        scanf("%d", &num);
        if(num == 7) break;
    }
    printf("Goodbye");
    return 0;
}

