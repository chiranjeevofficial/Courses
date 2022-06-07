#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void push();
void pop();
void display();
struct node{
    int val;
    struct node *next;
};
struct node *head;

void main (){
    int choice=0;
    //printf("\n*********Stack operations using linked list*********\n");
    //printf("\n----------------------------------------------\n");
    while(choice != 4)
    {
        printf("Chose one from the below options...\n");
        printf("1.Push\t2.Pop\n3.Show\t4.Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                getch();
                printf("\nExiting....");
                break;
            }
            default:
            {
                printf("Please Enter valid choice ");
            }
    };
}
}
void push (){
    int val;
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    if(ptr == NULL)
    {
        printf("not able to push the element");
    }
    else
    {
        printf("Enter the value: ");
        scanf("%d",&val);
        if(head==NULL)
        {
            ptr->val = val;
            ptr -> next = NULL;
            head=ptr;
        }
        else
        {
            ptr->val = val;
            ptr->next = head;
            head=ptr;

        }
        printf("Item pushed\n\n");

    }
}
void pop(){
    int item;
    struct node *ptr;
    if (head == NULL)
    {
        printf("Underflow");
    }
    else
    {
        item = head->val;
        ptr = head;
        head = head->next;
        free(ptr);
        printf("Item popped\n\n");

    }
}
void display(){
    int i;
    struct node *ptr;
    ptr=head;
    if(ptr == NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("\nPrinting Stack elements \n");
        while(ptr!=NULL)
        {
            printf("%d ",ptr->val);
            ptr = ptr->next;
        }
    }
    printf("\n\n");
}