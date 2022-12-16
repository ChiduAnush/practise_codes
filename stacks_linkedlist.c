# include <stdio.h>
# include <stdlib.h>


struct node{
    int data;
    struct node* next;
};

struct node* top = NULL;

void printstack(struct node* top){
    struct node* ptr;
    ptr = top;
    while(ptr != NULL){
        printf("%d->", ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}

struct node* push(int key){
    struct node* ptr;
    ptr = (struct node*) malloc(sizeof(struct node));
    ptr->data = key;

    if(top == NULL){
        ptr->next=NULL;
    }else{
        ptr->next = top;
    }
    top = ptr;
    return top;
}

void pop(){
    struct node* ptr;
    ptr = top;
    top = top->next;
    printf("element about to be popped: %d ", ptr->data);
    free(ptr);
}



int main(){
    for(int i=0; i< 5; i++){
        int z;
        printf("element to be pushed: ");
        scanf("%d", &z);

        top = push(z);
        printstack(top);
    }

    for(int i = 0; i < 3; i++){
        pop();
        printstack(top);
    }

}