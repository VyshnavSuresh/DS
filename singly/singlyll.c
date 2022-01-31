#include<stdio.h>
void insertbegin(int);
struct node
{
    int a;
    struct node*next;
};
struct node*head;
void main()
{
  int item,ch;
  do
  {
      printf("element to be  inserted:\n");
      scanf("%d",&item);
      printf("enter 0 to insert more elements\n");
      scanf("%d",&ch);
  }
  while(ch==0);
{
    void insertbegin(int item)
    {
        struct node*temp=(struct node*)malloc(sizeof(struct node*));
        temp->a=item;
        temp->a=head;
        head=temp;
        printf("Insert Node\n");

    }
}
}

