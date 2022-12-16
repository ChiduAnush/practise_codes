#include <stdio.h>

void bubblesort(int arr[], int n){
    int temp;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void printarray(int arr[], int n){
    printf("the array is: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertionsort(int arr[], int n){
    for( int i = 1; i < n; i++){
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main(){
    int arr[] = {1, 6, 3, 4, 5};
    int t = sizeof(arr)/sizeof(arr[0]);

    printarray(arr, t);
    insertionsort(arr, t);
    printarray(arr, t);

}