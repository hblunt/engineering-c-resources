#include <stdio.h>
#include <stdlib.h>

// hw1
int arr[7] = {8, 3, -1, 10, 5, 13, 7};

// hw6
// queue
typedef struct node {
    int data;
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

void selection_sort(int arr[], int size);
void bubble_sort(int arr[], int size);

int main(void){
    //selection_sort(arr, 7);
    // bubble_sort(arr, 7);
    qsort(arr, 7, sizeof(int), compare_int);
    return 0;
}

void selection_sort(int arr[], int size){
    for(int i = 0; i < size-1; i++){
        int min_i = i;
        for (int j = i + 1; j < size; j++){
            if(arr[j] < arr[min_i]){
                min_i = j;
            }
        }
        int temp = arr[min_i];
        arr[min_i] = arr[i];
        arr[i] = temp;

        printf("Iteration %d: ", i+1);
        for(int k=0; k < size; k++){
            printf("%d ", arr[k]);
        }
        printf("\n");
    }
}

// hw2
void bubble_sort(int arr[], int size){
    int i, j, temp;
    int swapped;

    for(int i = 0; i < size-1; i++){
        swapped = 0;
        for(j= 0; j < size-1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = 1;
            }
        }
        printf("Iteration %d: ", i+1);
        for(int k = 0; k < size; k++){
            printf("%d ", arr[k]);
        }
        printf("\n");
        if(swapped == 0) break;
    }
}

// hw3

void quick_sort(int arr[], int start, int end){
    if (end <= start) return;
    int pivot = partition(arr, start, end);
    quick_sort(arr, start, pivot-1);
    quick_sort(arr, pivot+1, end);
}

int partition(int arr[], int start, int end){
    int pivot = arr[start];
    int i = start;
    for(int j = start + 1; j<=end; j++){
        if(arr[j] < pivot){
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    i++;
    int temp = arr[i];
    arr[i] = arr[start];
    arr[start] = temp;

    return i;
}

// hw4
int compare_int(void *v1, void *v2){
    int a = *(int*)v1;
    int b = *(int*)v2;
    if (a < b) return -1;
    if (a==b) return 0;
    return 1;
}


