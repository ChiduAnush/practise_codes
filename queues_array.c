# include <stdio.h>
# include <stdlib.h>
# define n 10


int arr[n];
int front  = -1;
int rear = -1;


void enqueue(int key){
    if(rear == n-1){
        printf("not gonna happen bud");
    }else{

        if(front == -1){
            front++;
        }
        rear++;
        arr[rear] = key;
    }
}

void printqueue(){
    for(int i = front; i<= rear; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void dequeue(){
    front++;
}

int main(){
    enqueue(1);
    printqueue();
    enqueue(2);
    printqueue();
    enqueue(3);
    printqueue();
    enqueue(4);
    printqueue();
    enqueue(5);
    printqueue();
    enqueue(6);
    printqueue();

    dequeue();
    printqueue();
    dequeue();
    printqueue();
    dequeue();
    printqueue();

}