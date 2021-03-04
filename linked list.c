#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};
int main()
{
    struct node*head;
    struct node*second;
    struct node*third;
    struct node*fourth;
//    dynamic memory allocation
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
//   link head node and second node
    head->data=10;
    head->next=second;
//    link second node and third node
    second->data=11;
    second->next=third;
//    link third and fourth node
    third->data=12;
    third->next=fourth;
//    terminate list using null terminator

     fourth->data=13;
    fourth->next=NULL;
    linkedlisttraversal(head);
    return 0;
}
//traversal of linked list elements
void linkedlisttraversal(struct node*ptr)
{
    while(ptr!=NULL)
    {
        printf("Element:%d\n",ptr->data);
        ptr=ptr->next;
    }
}
