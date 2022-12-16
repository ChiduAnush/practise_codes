#include <stdio.h>

int linearsearch(int arr[],int N, int key){

    for(int i = 0; i < N; i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;    
}

int binarysearch(int arr[],int N, int key){

    int low = 0, high = N-1;
    while(low <= high){
        int mid = (low+high)/2;

        if(arr[mid] == key){
            return mid;
        }else if(key < arr[mid]){
            high = mid-1;
        }else if(key > arr[mid]){
            low = mid+1;
        }
    }
    return -1;
}



int main(){

int arr[10] = {1,2,3,4,5,6,7,8,9};
int N = sizeof(arr) / sizeof(arr[0]);
int key;
printf("enter your key element: ");
scanf("%d", &key);

 int linearsearchAns = linearsearch(arr, N, key);
 printf("Linear search answer is %d\n", linearsearchAns);

 int binarysearchAns = binarysearch(arr, N, key);
 printf("Binary search answer is %d\n", binarysearchAns);


}