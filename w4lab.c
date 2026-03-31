#include <stdio.h>
#include <stdlib.h>
#include <math.h>


double compute_cap_reactance(double cap, double freq);
float compute_sphere_volume(float radius);

int main(void){

    printf("%.2f\n", compute_sphere_volume(5));
    printf("%.2f\n", compute_cap_reactance(0.1, 2));
    return 0;
}

// q1

// add a check for negative radius

float compute_sphere_volume(float radius){
    if (radius < 0) return 0.0;
    return (4.0/3.0)*M_PI*pow(radius, 3);
}

// q2

int main2(void){
    double cap, freq;
    printf("This program computes the reactance of a given capacitor and frequency.");
    printf("Please enter the capacitance: (in F)");
    scanf("%lf", &cap);
    printf("Please enter the frequency: (in Hz)");
    scanf("%lf", &freq);
    printf("The reactance of the capacitor is equal to %.3e ohms", compute_cap_reactance(cap, freq));
    return 0;
}

double compute_cap_reactance(double cap, double freq){
    return 1/(2*M_PI*freq*cap);
}

// q3

// only sum the even numbers

int main3(void){
    int a, b;
    printf("Please enter a number");
    scanf("%d", &a);
    printf("Please enter a larger number");
    scanf("%d", &b);
    printf("The sum of all numbers between %d and %d is %d", a, b, sum_nums(a,b));
    return 0;
}

int sum_nums(int a, int b){
    if(a > b) return 0;
    int sum = 0;
    for (; a <= b; a++){
        sum += a;
    }
    return sum;
}


// q4

int main4(void){
    float a;
    int b;
    printf("Enter a base: ");
    scanf("%f", &a);
    printf("Please enter an exponent: ");
    scanf("%d", &b);
    printf("%f to the power of %d is %f", a, b, int_powers(a,b));
    return 0;
}

float int_powers(float x, int y){
    float res = 1;
    if (y == 0) return 1;
    for(int i = 0; i < abs(y); i++){
        res *= x;
    }
    if (y < 0) {
        return 1.0/res;
    }
    return res;
}

