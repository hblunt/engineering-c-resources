#include <stdio.h>
#include <stdlib.h>

// hw1
struct date {
    int day, month, year;
};

// hw2
struct person {
    char name[50];
    struct date dateOfBirth;
    char address[200];
    char phoneNum[20];
    int ID;
};


typedef struct person Person;

typedef struct {
    float x, y;
} Vector;

typedef struct {
    float length, width, height;
} RectPrism;

// hw3/4/5/6
int main(void){
    struct person chud;
    struct person *p = &chud;

    Person *arr[50];

    // 6
    for(int i = 0; i<50; i++){
        arr[i] = malloc(sizeof(Person));
    }

    for(int i = 0; i<50; i++){
        free(arr[i]);
    }

    printf("Enter your name: ");
    fgets(chud.name, 50, stdin);

    printf("Enter your date of birth (DD/MM/YYYY): ");
    scanf("%d/%d/%d", &chud.dateOfBirth.day, &chud.dateOfBirth.month, &chud.dateOfBirth.year);
    while (getchar() != '\n');

    printf("Enter your address: ");
    fgets(chud.address, 200, stdin);

    printf("Enter your phone number: ");
    fgets(chud.phoneNum, 50, stdin);

    printf("Enter your ID: ");
    scanf("%d", &chud.ID);
    while (getchar() != '\n');

    // 4

    printf("Person is:\n%s\nDOB: %d/%d/%d\nAddress: %s\nPhone: %s\nID: %d", p->name, p->dateOfBirth.day, p->dateOfBirth.month, p->dateOfBirth.year, p->address, p->phoneNum, p->ID);
}

int compare_age(Person *p1, Person *p2){
    if (p1->dateOfBirth.year < p2->dateOfBirth.year) return 1;
    else if(p1->dateOfBirth.year > p2->dateOfBirth.year) return -1;
    else if(p1->dateOfBirth.month < p2->dateOfBirth.month) return 1;
    else if(p1->dateOfBirth.month > p2->dateOfBirth.month) return -1;
    else if(p1->dateOfBirth.day < p2->dateOfBirth.day) return 1;
    else if(p1->dateOfBirth.day > p2->dateOfBirth.day) return -1;
    else return 0;
}

Vector vector_add(Vector *v1, Vector *v2){
    Vector v;
    v.x = v1->x + v2->x;
    v.y = v2->y + v2->y;
    return v;
}

float vector_dot_prod(Vector *v1, Vector *v2){
    return v1->x*v2->x + v1->y*v2->y;
}


float RPVolume(RectPrism *p){
    return p->length*p->width*p->height;
}

float RPSurfaceArea(RectPrism *p){
    return (p->width + p->length + p->height)*2;
}
