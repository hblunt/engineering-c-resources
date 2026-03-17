#include <stdio.h>
#include <math.h>


// q1

int main(void){
    float r1, r2, series, parallel;

    printf("Enter resistor value 1: ");
    scanf("%f", &r1);

    printf("Enter resistor value 2: ");
    scanf("%f", &r2);

    series = r1 + r2;
    parallel = (r1*r2/(r1+r2));

    printf("Resistors in series is %.2f, and resistors in parallel is %.2f", r1 + r2, (r1*r2/(r1+r2));

    return (0);
}

// q2

int main(void){
    int a, b, rem;

    printf("Enter a value: ");
    scanf("%d", &a);

    printf("Enter another value: ");
    scanf("%d", &b);

    rem = a % b;

    if(rem > 0){
        printf("%d is not a multiple of %d", a, b);
    }
    else {
        printf("%d is a multiple of %d", a, b);
    }

    return (0);
}

// q3

int main(void){
    char c;

    printf("Enter a letter: ");
    scanf("%c", &c);

    if(c >= 'a' && c <= 'z' && c != 'x'){
        printf("Valid letter");
    }
    else {
        printf("Invalid letter");
    }

    return (0);
}

// q4

int main(void){
    float a, b;
    int choice;
    float ans;

    printf("Enter a value: ");
    scanf("%f", &a);

    printf("Enter another value: ");
    scanf("%f", &b);

    printf("Choose an operation:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("Choice: ");
    scanf("%d", &choice);

    switch(choice){
    case 1:
        ans = a + b;
        printf("Answer: %f", ans);
        break;
    case 2:
        ans = a - b;
        printf("Answer: %f", ans);
        break;
    case 3:
        ans = a * b;
        printf("Answer: %f", ans);
        break;
    case 4:
        if (b == 0){
            printf("Cannot divide by zero.");
            break;
        }
        else{
            ans = a / b;
            printf("Answer: %.2f", ans);
            break;
        }
    default:
        printf("Not an operation.");
        break;
    }

    return (0);
}


// q4 alt

int main(void){
    float a, b;
    char choice;
    char secondInput;
    float ans;

    printf("Enter a value: ");
    scanf("%f", &a);

    printf("Enter another value: ");
    scanf("%f", &b);

    printf("Choose an operation:\na. Addition\nb. Subtraction\nc. Multiplication\nd. Division\n");
    printf("Choice: ");
    scanf(" %c", &choice);

    switch(choice){
    case 'a':
        ans = a + b;
        printf("Answer: %f", ans);
        printf("Make another input: ");
        scanf(" %c", &secondInput);
        printf("%c", secondInput);
        break;
    case 'b':
        ans = a - b;
        printf("Answer: %f", ans);
        break;
    case 'c':
        ans = a * b;
        printf("Answer: %f", ans);
        break;
    case 'd':
        if (b == 0){
            printf("Cannot divide by zero.");
            break;
        }
        else{
            ans = a / b;
            printf("Answer: %.2f", ans);
            break;
        }
    default:
        printf("Not an operation.");
        break;
    }

    return (0);
}

