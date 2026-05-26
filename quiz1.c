#include <stdio.h>

// q1
int main(void){

    float r1, r2, result;
    char type;

    printf("Enter two resistor values: ");

    scanf("%f %f", &r1, &r2);

    printf("Series (s) or parallel (p)?: ");
    scanf(" %c", &type);

    if (type == 's') {
        result = r1 + r2;
        printf("Series resistance: %.2f\n", result);
    } else if (type == 'p') {
        result = (r1 * r2) / (r1 + r2);
        printf("Parallel resistance: %.2f\n", result);
    } else {
        printf("Invalid input.\n");
    }

    return 0;
}

// q2 v1 - with getchar()
int main2(void){
    char curr, prev = '\0';
    int count = 0;

    printf("Enter a line: ");
    while((curr = getchar()) != '\n' && curr != EOF){
        if (curr == previous) count++;
        prev = curr;
    }
    printf("Repeated characters: %d\n", count);
    return 0;
}

// q2 v2 - using fgets()
int main3(void) {
    char line[100];
    int count = 0;

    printf("Enter a line of text: ");
    fgets(line, sizeof(line), stdin);

    for (int i = 1; line[i] != '\0' && line[i] != '\n'; i++) {
        if (line[i] == line[i - 1]) count++;
    }

    printf("Repeated characters: %d\n", count);
    return 0;
}

// q2 v3 - recursive function
int countRepeats(char previous) {
    char current = getchar();
    if (current == '\n' || current == EOF) return 0;
    return (current == previous ? 1 : 0) + countRepeats(current);
}

int main4(void) {
    printf("Enter a line of text: ");
    printf("Repeated characters: %d\n", countRepeats('\0'));
    return 0;
}

// q3
int factorial(int n){
    if (n <= 0) return 0;
    int result = 1;
    for (int i=2;i<n;i++){
        result *= i;
    }
    return result;
}

int main5(void){
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("%d! = %d\n", n, factorial(n));
    return 0;
}
