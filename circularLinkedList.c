#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

void displaylist(struct node* head){

    struct node* ptr = head;

    while(ptr->next != head){
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
    printf("%d", ptr->data);
    printf("\n");
}

struct node* insertatbeg(struct node* head, int n){
    struct node* ptr = (struct node*)malloc(sizeof(struct node*));
    struct node* p = head;
    while(p->next != head){
        p = p-> next;
    }

    p->next= ptr;
    ptr->data = n;
    ptr->next = head;
    head = ptr;
    return head;
}

void insertatend(struct node* head, int n){
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = n;

    struct node* p = head;
    while(p->next != head){
        p=p->next;
    }
    p->next = ptr;
    ptr->next = head;

}

struct node* deleteelement(struct node* head, int n){
    struct node* p = head;
    struct node* q;

    if(head->data == n){
        struct node* ptr = head;
        while(ptr->next != head){
            ptr=ptr->next;
        }
        ptr ->next = head->next;
        q = head;
        head = head->next;
        free(q);
        return head;
    }else{
    while((p->next)->data != n){
        p=p->next;
    }

    q = p->next;
    p->next = (p->next)->next;
    free(q);
    return head;
    }
}


int main(){

struct node* head;
head=(struct node*) malloc(sizeof(struct node));

struct node* second;
second=(struct node*) malloc(sizeof(struct node));

struct node* third;
third =(struct node*)malloc(sizeof(struct node));

struct node* fourth;
fourth =(struct node*)malloc(sizeof(struct node));



head ->data = 1;
head ->next = second;

second ->data = 2;
second ->next = third;

third ->data = 3;
third ->next = fourth;

fourth ->data = 4;
fourth ->next = head;

displaylist(head);

head = insertatbeg(head, 0);
head = insertatbeg(head, -1);
head = insertatbeg(head, -2);
displaylist(head);

// head = deleteelement(head, -2);
// displaylist(head);

insertatend(head, 99);
displaylist(head);
}