# include <stdio.h>

int insertatindex(int arr[], int k, int n, int key){
    for(int i = n-1; i>=k; i--){
        arr[i+1]=arr[i];
    }
    arr[k] = key;
    n++;
    return n;
}

void printarray(int arr[], int n){
  for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }  
    printf("\n");
}

int deleteatindex(int arr[], int k, int n){
    for(int i=k+1; i<n; i++){
        arr[i-1]=arr[i];
    }
    n--;
    return n;
}


int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9};
    int n = 9;

     printarray(arr, n);
    // n =  insertatindex(arr, 3, n, 4);
    // printarray(arr, n);

    n = deleteatindex(arr, 4, n);
    printarray(arr, n);

}