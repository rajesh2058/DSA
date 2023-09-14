#include<stdio.h>
#include<stdlib.h>
void create_node();
void insert_begin();
void insert_end();
void insert_pos();
void display();
struct node // creating a node 
{
    int info;
    struct node *next;
    struct node *prev;  
};
struct node *head=NULL;
int main()
{
    int choice;
    while(1){
    printf("\n enter 1 creat node: \n 2 for insert in beginning:\n 3 for insert at end:\n 4 for insert at position:\n 5 for display:\n and 6 for exit:\n");
    scanf("%d",&choice);
    switch(choice)
    {
           case 1:
            create_node();
            break;
            case 2:
            insert_begin();
            break;
            case 3:
            insert_end();
            break;
            case 4:
            insert_pos();
            break;
            case 5:
            display();
            break;
            case 6:
            exit(0);
            default:
            printf("you have enter wrong no:\n");
    }
    }
}      
void create_node()
{
    struct node *temp,*ptr; //ptr point that node
 
   temp=(struct node*) malloc(sizeof (struct node)); //Malloc is used for dynamic memory allocation 
if(temp==NULL)                                     //and is useful when you don't know the amount of memory needed during compile time
{
    printf("\n memory not allocated");
    exit(0);
}
else{
printf("\n enter data:");
scanf("%d",&temp->info);
temp->next=NULL;
temp->prev=NULL;
}
if(head==NULL)
{
    head=temp;
}
else
{
    ptr=head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=temp;
    temp->next=NULL;
    temp->prev=ptr;
}
}
void insert_begin()
{
    struct node*temp;
    temp=(struct node*)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("\n memory not allocated");
        exit(0);
    }
    printf("\n enter data:");
    scanf("%d",&temp->info);
    temp->next=NULL;
    temp->prev=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
}
void insert_end()
{
  struct node*temp,*ptr;
    temp=(struct node*)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("\n memory not allocated");
        exit(0);
    }
    printf("\n enter data:");
    scanf("%d",&temp->info);
    temp->next=NULL;
    temp->prev=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        ptr=head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
            
        }
        ptr->next=temp;
        temp->prev=head;
        temp->next=NULL;
    }
}
void insert_pos()
{
    int i,loc,item;
    struct node *ptr1,*ptr2,*temp;
    ptr1=(struct node *)malloc(sizeof(struct node));
    if(ptr1==NULL)
    {
        printf("\n OVERFLOW");
    }
    else
    {
        printf("\n Enter element value \n");
        scanf("%d",&item);
        ptr1->info=item;
        printf("\n Enter the location after which you want to insert \n");
        scanf("\n%d",&loc);
        temp=head;
        for(i=0;i<loc;i++)
        {
            temp=temp->next;
            if(temp==NULL)
            {
                printf("\n can't insert\n");
                return;
            }
        }
        ptr1 ->next= temp->next;
        ptr2 ->prev=temp->prev;
        temp->next=ptr1;
        temp->prev=ptr1;
       printf("\n Node inserted \n");
    }
}
void display()
{
    struct node *ptr;
    ptr=head;
    if(ptr==NULL)
    {
        printf("nothing to print");
    }
    else{
        printf("\n printing value.......\n");
        while(ptr!=NULL)
        {
            printf("\n%d",ptr->info);
            ptr=ptr->next;
        }
    }
}
