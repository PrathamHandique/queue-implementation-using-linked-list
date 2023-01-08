//*************************************************************************************************************************************************
#include<stdio.h>
struct node{
    int data;
    struct node *next;
};
struct node *front=0;
struct node *rear=0;
//************************************************************************************************************************************************
void enqueue(){
    int x;
    printf("enter the element to push");
    scanf("%d",&x);
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=0;
    if(front==0 && rear==0){
        front=rear=newnode;
    }
    else
        {rear->next=newnode;
        rear=newnode;
        }
}
//************************************************************************************************************************************************
void dequeue(){
if(front==0 && rear==0)
    {printf("empty queue");}
else
   {struct node*temp;
   temp=front;
   front=front->next;
   free(temp);
    }
}
//************************************************************************************************************************************************
void display(){
    if(front==0 && rear==0)
    {printf("empty queue");}
else
   {struct node*temp;
   temp=front;
   while(temp!=0)
          {printf("%d\n",temp->data);
           temp=temp->next;
          }
   }
}
//************************************************************************************************************************************************
void main(){
    int ch;

    do{
        printf("enter choice");
    scanf("%d",&ch);
        switch(ch){
        case 1:
            {enqueue();
            break;}
        case 2:
           {dequeue();
            break;}
        case 3:
            {display();
            break;}
        default :
            {printf("invalid choice \n");
            }
        }
    }while(ch!=0);
}
