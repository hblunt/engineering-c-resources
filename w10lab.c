#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

    return 0;
}

// q1
int is_leap_year(int year) {
    if (year % 400 == 0) return 1;
    if (year % 100 == 0) return 0;
    if (year % 4 == 0)   return 1;
    return 0;
}

// one-liner version
int is_leap_year(int year){
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

// q2

int is_perfect(int num){
    int sum = 1;
    if (num <= 1) return 0;
    for (int i = 2; i*i <= num; i++){
        if (num % i == 0) {
            if(num/i != i){
                sum += i + num / i;
            }
            else {
                sum += i;
            }
        }
    }
    return sum == num;
}

// q3
typedef struct {
    int day;
    int month;
    int year;
} Date;

// supp function for days in months
int month_days(int month, int year){
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && is_leap_year(year)) return 29;
    return days[month - 1];
}

Date add_days(Date date, int numDays){
    date.day += numDays;
    while (date.day > month_days(date.month, date.year)) {
        date.day -= month_days(date.month, date.year);
        date.month++;
        if (date.month > 12) {
            date.month = 1;
            date.year++;
        }
    }
    return d;
};

// q4
void apply_transform(float *source, float *dest, int size, float(*func)(float)){
    for (int i = 0; i < size; i++){
        dest[i] = func(source[i]);
    }
}
// test function
float square(float num){
    return num * num;
}
