# include <stdio.h>
# include <stdlib.h>

int top = -1; int n = 10; int arr[10];

void printstack(int arr[]){
    if(top ==-1){
        printf("stack underflow");
    }
    for(int i = 0; i <= top; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void push(int arr[], int key){
    if(top==n-1){
        printf("stack overflow");
    }else{
        top++;
        arr[top]=key;
    }
}

void pop(int arr[]){
    printf("element to be popped: %d : ", arr[top]);

    top--;
}


int main(){



    for(int i = 0; i<5; i++){
        int z;
        printf("element to push: ");
        scanf("%d", &z);

        push(arr, z);
        printstack(arr);
    }

    for(int i = 0; i<3; i++){
        printf("popping...");
        pop(arr);
        printstack(arr);
    }

}