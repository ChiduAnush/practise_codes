# include <stdio.h>
# include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

void printlist(struct node* head){
    struct node* p;
    p = head;

    while(p!=NULL){
        printf("%d->", p->data);
        p=p->next;
    }
    printf("\n");
}

void deleteatend(struct node* head){
    struct node* p;
    struct node* q;
    p = head;
    q = p->next;
    while((p->next)->next!=NULL){
        p=p->next;
    }
    free (q);
    p->next=NULL;
}

struct node* deleteatbeg(struct node* head){
    struct node* p;
    p=head;
    head = head->next;
    free (p);
    return head;
}

void deleteatindex(struct node* head, int k){
    struct node* p;
    struct node* q;
    int i;

    p=head; i =0; 
    q = p->next;

    while(i<k-1){
        p=p->next;
        i++;
    }
    p->next = (p->next)->next;
    free (q);
}


int main(){
    struct node* head;
    head = (struct node*) malloc(sizeof(struct node));

    struct node* second;
    second = (struct node*) malloc(sizeof(struct node));

    struct node* third;
    third = (struct node*) malloc(sizeof(struct node));

    struct node* fourth;
    fourth = (struct node*) malloc(sizeof(struct node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 4;
    fourth->next = NULL;

    printlist(head);

    // deleteatend(head);
    // printlist(head);

    // head = deleteatbeg(head);
    // printlist(head);

    deleteatindex(head, 3);
    printlist(head);
}