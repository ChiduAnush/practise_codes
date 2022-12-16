# include <stdio.h>
# include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

void printlist(struct node* ptr){
    struct node* p;
    p = ptr;
    while(p!=NULL){
        printf("%d->", p->data);
        p = p->next;
    }
    printf("\n");
}

struct node* insertatbeg(struct node* head, int n){
    struct node* ptr;
    ptr = (struct node*) malloc(sizeof(struct node));
    ptr->data=n;

    ptr->next = head;
    head = ptr;
    return head;
}

void insertatend(struct node* head, int n){
    struct node* ptr;
    ptr = (struct node*) malloc(sizeof(struct node));

    struct node* p;
    p = head;
    while(p->next != NULL){
        p=p->next;
    }

    p->next = ptr;
    ptr->data = n;
    ptr->next = NULL;
}

void insertatindex(struct node* head, int n, int k){
    struct node* ptr;
    ptr = (struct node*) malloc(sizeof(struct node));
    struct node* p;

    p = head; int z = 0;
    while(z<k-1){
        p=p->next;
        z++;
    }
    ptr->data= n;
    ptr->next=p->next;
    p->next=ptr;
}


int main(){

    struct node* head;
    head = (struct node*) malloc(sizeof(struct node));

    head->data = 1;
    head->next = NULL;

    printlist(head);

    // int n;
    // printf("which number do you want to inser at beginning: ");
    // scanf("%d", &n);
    // head = insertatbeg(head, n);
    // printlist(head);

    for(int i=0; i<4; i++){
        int n;
        printf("element to be inserted at end: ");
        scanf("%d", &n);
        insertatend(head, n);
        printlist(head);
    }

    insertatindex(head, 99, 3);
    printlist(head);
}

//--------------------------------------------------------------------------------------------------------

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

void displaylist(struct node* ptr){
    while(ptr != NULL){
        printf("%d ", ptr ->data);
        ptr = ptr ->next;
    }
    printf("List has ended");
}

struct node* insertatbeg(struct node* head, int n){
    struct node* ptr;
    ptr = (struct node*) malloc(sizeof(struct node));

    ptr ->data = n;
    ptr ->next = head;

    return ptr;
}


void insertatindex(struct node* head, int k, int n){
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    struct node* p = head;
    int i = 1;

    for(i=1;i<k-1;i++){
        p = p->next;
    }

    ptr ->data = n;
    ptr->next = p->next;
    p->next = ptr;

}

void insertatend(struct node* head, int n){
    struct node* p = head;
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr ->data = n;

    while(p->next != NULL){
        p = p ->next;
    }

    p ->next = ptr;
    ptr->next = NULL;
}

int main(){

struct node* head;
head=(struct node*) malloc(sizeof(struct node));

struct node* second;
second=(struct node*) malloc(sizeof(struct node));

struct node* third;
third =(struct node*)malloc(sizeof(struct node));


head ->data = 1;
head ->next = second;

second ->data = 2;
second ->next = third;

third ->data = 3;
third ->next = NULL;

displaylist(head);
head = insertatbeg(head, 6);
displaylist(head);

insertatindex(head, 3, 7);
displaylist(head);

insertatend(head, 11);
displaylist(head);

}
