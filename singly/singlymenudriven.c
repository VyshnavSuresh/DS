#include<stdio.h>
#include<stdlib.h>
void insert_beg(int);
void insert_end();
void insert_random();
void delete_beg();
void delete_end();
void delete_random();
void display();
struct node
{
int data;
struct node*next;
}*head=NULL;
int value,choice,loc1,loc2;
void main()
{
    while(choice!=7)
    {
        printf("\n1.insert at beg\n2.insert at end\n3.insert random\n4.delete beg\n5.delete end\n6.delete random\n ");
        printf("\n Enter your choice=");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("enter the value\n");
            scanf("%d",&value);
            insert_beg(value);
            display();
            break;
        case 2:
            printf("enter the value");
            scanf("%d",&value);
            insert_end();
            display();
            break;
        case 3:
            printf("enter the value");
            scanf("%d",&value);
            printf("enter the locations");
            scanf("%d%d",&loc1,&loc2);
            insert_random();
            display();
            break;
        case 4:
            delete_beg();
            display();
            break;
        case 5:
            delete_end();
            display();
            break;
        case 6:
            printf("enter the location to delete");
            scanf("%d",&loc1);
            delete_random();
            display();
            break;
        default:
            printf("INVALID!!!!");
            break;
            }
    }
}
void insert_beg(int value)
{
    struct node*newnode=malloc(sizeof(struct node));
    newnode->data=value;
    if(head==NULL)
    {
        newnode->next=NULL;
        head=newnode;
    }
    else
    {
        newnode->next=head;
        head=newnode;
    }

}
void insert_end()
{
    struct node*newnode=malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        struct node*temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
    }
}
    void insert_random()
    {
        struct node*newnode=malloc(sizeof(struct node));
        newnode->data=value;
        if(head==NULL)
        {
            newnode->next=NULL;
            head=newnode;
        }
        else
        {
            struct node*temp=head;
            while(temp->data!=loc1&&temp->data!=loc2)
            {
                temp=temp->next;
            }
            newnode->next=temp->next;
            temp->next=newnode;

        }
    }
    void delete_beg()
    {
        if(head==NULL)
        {
         printf("deletion is not possible");
        }
        else
        {
            struct node*temp=head;
            head=temp->next;
            free(temp);
        }
    }
    void delete_end()
    {
        if(head==NULL)
        {
            printf("deletion not possible");
        }
        else
        {
            struct node*temp=head;
            struct node*prev;
            while(temp->next!=NULL)
            {
                prev=temp;
                temp=temp->next;
            }
            prev->next=NULL;
            free(temp);

        }
    }
    void delete_random()
    {
        if(head==NULL)
        {
            printf("deletion not possible");

        }
        else
        {
            struct node*temp=head;
            struct node*prev;
            while(temp->data!=loc1)
            {
                prev=temp;
                temp=temp->next;
            }
            prev->next=temp->next;
            free(temp);

        }
    }
    void display()
    {
    struct node*temp=head;
    while(temp->next!=NULL)
    {
        printf("%d-->",temp->data);
        temp=temp->next;
    }
    printf("%d-->NULL",temp->data);
    }
