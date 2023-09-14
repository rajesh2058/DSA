#include <stdio.h>  //linear queue is like array 
#include <stdlib.h>  //libarary for exit fn
#define Max 5  //size of queue
int queue[Max];
int front = 0;
int rear = -1; //rear is use to input data and front is use to deque data
int item;
int choice;
void Enqueue();
void Dequeue();
void display();

void main()
{

    while (1)
    {
        printf("Enter your choice 1 for enqueue,2 for dequeue,3 for display and 4 for exit: \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            Enqueue();
            break;
        case 2:
            Dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0); //pre define function
            break;

        default:
            printf("You entered wrong choice!!!!\n");
        }
    }
}
void Enqueue() //to put data, before that check is queue is full or not by rear
{
    if (rear >= Max - 1)  //rear is use to check is queue is full or not
    {
        printf("Queue is Full.\n");
    }
    else
    {
        printf("Enter item which you want to store :");
        scanf("%d", &item);
        rear++;
        queue[rear] = item;
    }
}
void Dequeue()  //to check data is in or not through front
{
    if (front > rear)
    {
        printf("Queue is Empty.\n");
    }
    else
    {
         printf("ok it is dequeue now \n");
        item = queue[front];
        front = front + 1;
    }
}
void display()
{
    if (rear == -1)
    {
        printf("Queue is Empty!\n");
    }
    else
    {
        int i;
        printf("Queue are:\n");
        for (i = front; i <= rear; i++)
        {
            printf("%d\n", queue[i]);
        }
    }
    printf("\n");
}