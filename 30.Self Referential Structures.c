#include <stdio.h>
#include <stdlib.h>
/*
A structure which has pointer to itself is called self referential structure.
*/
//single linked list
struct node{
    int data;
    struct node * next;
};
//double linked list
struct node{
    int data;
    struct node *prev, * next;
};
//tree
struct node{
    int data;
    struct node *left_child, *right_child;
};
int main()
{
    struct node * head = NULL;
    struct node *second = NULL;
    struct node *third = NULL;
    //1->2->3
    head = (struct node*) malloc(sizeof(struct node));
    second = (struct node*) malloc(sizeof(struct node));
    third = (struct node*) malloc(sizeof(struct node));
    head->data = 1;
    second->data = 2;
    third->data = 3;
    
    second->next = third;
    head->next = second;
    third->next= NULL;
    
    struct node * temp = NULL;
    temp = head;
    while(temp != NULL){
        printf("%d->", temp->data);
        temp = temp->next;
    }
    
    

    return 0;
}

