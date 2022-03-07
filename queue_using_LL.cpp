// Queue using linked list
#include <stdio.h>
#include<stdlib.h>
#include <iostream>

using namespace std;
struct node
{
    int data;
    struct node*next;
};
struct node*front=NULL,*rear=NULL,*newnode;
void enque()
{
    int num;
    cout<<"Enter data ";
    cin>>num;
    newnode=new node();
    newnode->data=num;
    newnode->next=NULL;
    if(front==NULL && rear==NULL)
    {
        front=rear=newnode;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
    }
}
void dequ()
{
    struct node*temp=front;
    front=front->next;
    free(temp);
}
void display()
{
    struct node*temp=front;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{
    while(1)
    {
        int ch;
        cout<<"Enter your choice";
        cin>>ch;
        switch(ch)
        {
            case 1:
            enque();
            break;
            case 2:
            dequ();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(0);
            
            default:
            cout<<"Wrong choice entered";
        }
    }

    return 0;
}
