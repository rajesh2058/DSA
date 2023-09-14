#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int queue[5];
int rear=0;
int front=0;
int item;
void enqueue();
void dequeue();
void display();
int main(){
    int choice;
    while(1)
    {
        printf("enter your choice 1-3:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            enqueue();
            break;
             case 2:
            dequeue();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(0);
            break;
            default:
            printf("invalid input");
        }
    }
    return 0;
}
void enqueue()
{
    if((rear+1)%MAX==front)
    {
        printf("queue is full:\n");
    }
    else{
        printf("enter item which you want to store:");
        scanf("%d",&item);
        queue[rear]=item;
        rear ++;
    }
}
void dequeue()
{
    if(front==rear){
        printf("queue is empty:\n");
    }
    else{
        item=queue[front];
        printf("the dequeue element is %d \n",item);
        front=front+1;
    }
}
void display()
{
    if(rear==front)
    {
        printf("queue is empty\n");
    }
    else{
        int i;
        printf("queue are:\n");
        for(i=front;i<=(rear-1);i++)
        {
            printf("%d",queue[i]);
        }
    }
    printf("\n");
}