#include <stdio.h>
#include <stdlib.h>

typedef struct dlist
{
    int data;
    struct  dlist *prev;
    struct dlist *next; 
}node;

node *insf(node *head,int data){
    node *ptr= (node*)malloc(sizeof(node ));
    ptr->prev=NULL;
    ptr->next= head;
    ptr->data= data;

    return ptr;
}

node *insE(node *head,int data){
    node *ptrr= (node *)malloc(sizeof(node));
    node *p= head;

    while (p->next != NULL)
    {
        p=p->next;
    }
    ptrr->data=data;
    p->next= ptrr;
    ptrr->next= NULL;
    ptrr->prev = p;

    return head;
}

node *insB(node *head,int data,int index){
    node *pptr=(node *)malloc(sizeof(node));
    node *pp= head;
int i=0;

while (i != index-1)
{
    pp= pp->next;
    i++;
}
pptr->data=data;
pptr->next=pp->next;
pp->next=pptr;
pptr->prev=pp;

return head;
}

void traverse(node *head){
    while (head != NULL)
    {
        printf("%d-->",head->data);
        head=head->next;
    }
    printf("\n");
}

/* This method can only be used for singly self defined
linked lists */ 
// void Preverse(node *ptr){
// while (ptr != NULL)
//     {
//         printf("%d-->",ptr->data);
//         ptr=ptr->prev;
//     }
// }

int main(int argc, char const *argv[]){
    //creating 3 nodes
     node *head;
    node *sec;
    node *trd;
// allocated in heap for the nodes
    head= (node *)malloc(sizeof(node));
    sec= (node *)malloc(sizeof(node));
    trd= (node *)malloc(sizeof(node));
//assigning values in data and pointing to the next
    head->data=7;
    head->prev=NULL;
    head->next= sec;

    sec->data=10;
    sec->prev=head;
    sec->next= trd;
//null means the list ends here
    trd->data=17;
    trd->prev=sec;
    trd->next= NULL;

head= insf(head,20);
head= insB(head,25,2);
head= insE(head,22);
 traverse(head);  //the first node 
 //Preverse(trd);
 return 0;
}