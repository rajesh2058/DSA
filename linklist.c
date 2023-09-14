#include<stdio.h> //link list practice 
#include<stdlib.h>
void create_node();
void insert_begin();
void insert_end();
void insert_pos();
void display();
struct node // creating a node 
{
    int info;
    struct node *next;  //one note is pointing another node . same data type can point same data type.                       //struct node *prev; for double link list . so it can go forward and backward
};
struct node *head=NULL;
int main()
{
    int choice;
    while(1) //while 1 mean it always true and run infinite time and we add a thing to stop.
    {
        printf("\n enter 1 for create \n 2 for insertion in beginning \n 3 for insertion in last \n 4 for insertion AFTER THE position YOU WANT\n 5 for display\n 6 for exit\n");
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
    return 0;
}
void create_node()
{
    struct node *temp,*ptr;
 
   temp=(struct node*) malloc(sizeof (struct node)); //Malloc is used for dynamic memory allocation 
if(temp==NULL)                                     //and is useful when you don't know the amount of memory needed during compile time
{
    printf("\n memory not allocated");
    exit(0);
}
else{
printf("\n enter data/info:");
scanf("%d",&temp->info);
temp->next=NULL;
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
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        temp->next=head;
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
    }
}
void insert_pos()
{
    int i,loc,item;
    struct node *ptr, *temp;
    ptr    =(struct node *)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        printf("\n OVERFLOW");
    }
    else
    {
        printf("\n Enter element value");
        scanf("%d",&item);
        ptr->info=item;
        printf("\n Enter the location after which you want to insert");
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
        ptr ->next= temp->next;
        temp->next=ptr;
       printf("\n Node inserted ");
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

