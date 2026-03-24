#include <stdio.h>
#include <stdlib.h>

void display_dollar(float num);

int main(void){
    display_dollar(13.3);
    return 0;
}

// hw1

int min(int a, int b){
    if(a > b){
        return b;
    }
    else if(a < b){
        return a;
    }
    else {
        return 0;
    }
}

// hw2

int is_vowel(char c){

    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ){
        return 1;
    }
    else {
        return 0;
    }

    return 0;
}

// hw3

int is_lower(char c){

    if(c >= 'a' && c <= 'z'){
        return 1;
    }
    else {
        return 0;
    }

    return 0;
}

// hw4

float power(float a, int b);

// hw5

float power(float a, int b){
    for(int i = 0; i < b; i++){
        a *= a;
    }
    return a;
}

void display_dollar(float num){
    printf("$%.2f", num);
}
