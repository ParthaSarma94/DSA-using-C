#include <stdio.h>
#include <stdlib.h>

typedef struct dlist
{
    int data;
    struct  dlist *prev;
    struct dlist *next; 
}node;

//this func will insert a node at the beginning of the list...
node *insFront(node *head,int data){
    node *ptr= (node*)malloc(sizeof(node ));
    ptr->prev=NULL;
    ptr->next= head;
    ptr->data= data;

    return ptr;
}

//this func will inert a node at the end of the list..
node *insEnd(node *head,int data){
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

//this func will insert a node after the given index...
node *insBetween(node *head,int data,int index){
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

//print the list...
void traverse(node *head){
    while (head != NULL)
    {
        printf("%d-->",head->data);
        head=head->next;
    }
    printf("\n");
}

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

head= insFront(head,20);
head= insBetween(head,25,2);
head= insEnd(head,22);
 traverse(head);  //the first node 

 return 0;
}
