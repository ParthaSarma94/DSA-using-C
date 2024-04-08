#include <stdio.h>
#include <stdlib.h>

typedef struct List
{
    int data;
    struct List *next;
}node;

void traverse(node *ptr){
    while (ptr != NULL){
        printf("%d, ",ptr->data);
        ptr=ptr->next;
    }  
}

node *insE(node *head,int data){
node *ptr=(node*)malloc(sizeof(node));
    node *p=head;

    while (p->next != NULL)
    {
        p=p->next;
    }
    ptr->data=data;
    p->next= ptr;
    ptr->next= NULL;
    return head;
}

int main(int argc, char const *argv[])
{
    node *head= (node*)malloc(sizeof(node));
    node *sec= (node*)malloc(sizeof(node));
    node *trd= (node*)malloc(sizeof(node));

    head->data=10;
    sec->data=20;
    trd->data=30;

    head->next= sec;
    sec->next= trd;
    trd->next=NULL;
    
head= insE(head,50);
     traverse(head);
    return 0;
}
