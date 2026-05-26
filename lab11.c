#include <stdio.h>
#include <stdlib.h>

void bubble_sort(float arr[], int size);

// queue
typedef struct node {
    int data;
    struct node *next;
} Node;

// q4 for stack, just changes data to pointer
typedef struct node {
    void *data;
    struct node *next;
} Node;


// linked list queue
Node *front = NULL;
Node *rear = NULL;

// linked list stack
Node *stackTop = NULL;

// array queue
int queueArr[5];
int queueFront = 0;
int queueRear = 0;

// array stack
int stack[5];
int top = -1;

// q1
float arr[7] = {8, 3, -1, 10, 5, 13, 7};

int main(void){
    printf("Before: ");
    for(int i = 0; i < 7; i++){
        printf("%.2f ", arr[i]);
    }
    printf("\n");
    bubble_sort(arr, 7);
    printf("After: ");
    for(int i = 0; i < 7; i++){
        printf("%.2f ", arr[i]);
    }
    printf("\n");
    return 0;
}

void bubble_sort(float arr[], int size){
    int i, j, temp;
    int swapped;
    for (int i = 0; i < size-1; i++){
        swapped = 0;
        for(int j = 0; j < size-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = 1;
            }
        }
        if(swapped == 0) break;
    }
}

// q2
void enqueue_LL(int val){
    Node *newNode = malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = NULL;
    if(front == NULL && rear == NULL){
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
}

void enqueue_arr(int val){
    if(queueRear == 5){
        printf("Queue is full");
        return;
    }
    queueArr[queueRear] = val;
    queueRear++;
    }
}

void dequeue_LL(){
    Node *temp;
    if (front == NULL){
        printf("Queue already empty");
    }
    else {
        temp = front;
        front = front->next;
        if (front == NULL) rear = NULL;
        printf("Deleted: %d\n", temp->data);
        free(temp);
    }
}

void dequeue_arr(){
    if(queueRear == queueFront){
        printf("Queue already empty");
        return;
    }
    printf("Deleted: %d\n", queueArray[queueFront]);
    for(int i = queueFront; i < queueRear -1; i++){
        queueArr[i] = queueArr[i+1];
    }
    queueRear--;
}

// q3
void push_LL(int val){
    Node *newNode = malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = stackTop;
    stackTop = newNode;
}

int pop_LL(){
    Node *temp;
    int val;
    if (stackTop == NULL){
        printf("Stack empty.");
        return -1;
    }
    temp = stackTop;
    val = stackTop->data;
    stackTop = stackTop->next;
    free(temp);
    return(val);
}

void push_arr(int val){
    if(top == 4){
        printf("Stack full");
    } else {
        top++;
        stack[top] = val;
    }
}

void pop_arr(){
    if (top == -1){
        printf("Stack empty");
    } else {
        printf("Popped: %d\n", stack[top]);
        top--;
    }
}


// q4
void push_LL(void *val){
    Node *newNode = malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = stackTop;
    stackTop = newNode;
}

void *pop_LL(){
    Node *temp;
    void *val;
    if (stackTop == NULL){
        printf("Stack empty.");
        return NULL;
    }
    temp = stackTop;
    val = stackTop->data;
    stackTop = stackTop->next;
    free(temp);
    return(val);
}

// peek function for stack
void *peek(){
    if (stackTop == NULL) return NULL;
    return stackTop->data;
}


// print for queue
void printq_LL(){

}
