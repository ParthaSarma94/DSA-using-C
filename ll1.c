#include <stdio.h>
#include <stdlib.h>
//creating a structure
struct Node{
    int data;
    struct Node *next; //points to next node
};

void traverse();

int main(int argc, char const *argv[]){
    //creating 3 nodes
    struct Node *head;
    struct Node *sec;
    struct Node *trd;
// allocated in heap for the nodes
    head= (struct Node *)malloc(sizeof(struct Node));
    sec= (struct Node *)malloc(sizeof(struct Node));
    trd= (struct Node *)malloc(sizeof(struct Node));
//assigning values in data and pointing to the next
    head->data=7;
    head->next= sec;

    sec->data=10;
    sec->next= trd;
//null means the list ends here
    trd->data=17;
    trd->next= NULL;

 traverse(head);  //the first node 
 return 0;
}

void traverse(struct Node *ptr){
    while (ptr != NULL) {
        printf("%d, ",ptr->data);
        ptr= ptr->next;   //automatically switch to the next node
    }
}
    