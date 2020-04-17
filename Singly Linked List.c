#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
}*head;
    void createnode(int n)
    {
        int i,data;
        head=(struct node*)malloc(sizeof(struct node));
        printf("enter the first node element");
        scanf("%d",&data);
        head->data=data;
        head->link=NULL;
        struct node*temp=head;
        for(i=2;i<=n;i++)
        {
            struct node*newnode=(struct node*)malloc(sizeof(struct node));
            printf("enter element for another nodes");
            scanf("%d",&newnode->data);
            newnode->link=NULL;
            temp->link=newnode;
            temp=temp->link;
struct node*newone=head;
            }printf("list created successfuly\n");



    }
    void traverse()
    {   struct node*temp=head;
    printf("traversing\n");
        while(temp!=NULL)
        {
            printf("%d    ",temp->data);
            temp=temp->link;

        }
    }
    void insetbegin()
    {
            struct node*newone=(struct node *)malloc(sizeof(struct node));
            printf("\nenter element want in beginning");
            scanf("%d",&newone->data);
            newone->link=head;
            head=newone;

    }
    void insertend()
    {
        struct node*temp=(struct node *)malloc(sizeof(struct node));
        temp=head;
       struct node*newone=(struct node *)malloc(sizeof(struct node));
       printf("element want insert at end ");
       scanf("%d",&newone->data);
       newone->link=NULL;
        while(temp->link!=NULL)
        {
            temp=temp->link;
        }
        temp->link=newone;
    }
    void insertbtw()
    {   int n,data;
        struct node*temp=(struct node *)malloc(sizeof(struct node));
        temp=head;
        struct node*newone=(struct node *)malloc(sizeof(struct node));
        printf("after which element you want insert");
        scanf("%d",&n);
       /* while(temp->data!=n)
        {
            temp=temp->link;
        }*/
        printf("enter element want insert");
        scanf("%d",&data);
        newone->data=data;
        while(temp->data!=n)
        {
            temp=temp->link;

        }
        newone->link=temp->link;
        temp->link=newone;
    }
    void deletebegin()
    {
        head=head->link;
    }
    void deleteend()
    {
       struct node*temp=(struct node *)malloc(sizeof(struct node));
        temp=head;
        while(temp->link->link!=NULL)
        {
            temp=temp->link;
        }
        temp->link=NULL;
    }
    void deletebtw()
    {   struct node*temp=(struct node *)malloc(sizeof(struct node));
        temp=head;
        int n;
        printf("enter the element after which deletee");
        scanf("%d",&n);
        while(temp->data!=n)
        {
            temp=temp->link;
        }
    temp->link=temp->link->link;


    }
   void lasttofirst()
    {

        struct node*temp=head;

        struct node*newone=head;
        printf("\nlast come infront of first node");
        while(temp->link->link!=NULL)
        {
            temp=temp->link;
        }
       temp->link->link=head;
       head=temp->link;
       temp->link=NULL;
       /* head=temp->link;
        temp->link=NULL;
        temp->link->link=newone;*/

    }
    void reverse()
    {
        int ar[100],i=0;
         struct node*temp=head;
         struct node*newone=head;
         while(temp->link!=NULL)
         {
             ar[i]=temp->data;
             i++;
             temp=temp->link;
    }   ar[i]=temp->data;



    while(newone->link!=NULL)
    {
        newone->data=ar[i];
        i--;
        newone=newone->link;
    }
    newone->data=ar[i];
    }
   /* voidreverserecu()
    {

    }*/
void main()
{   int n;
    printf("enter no. of nodes want");
    scanf("%d",&n);
    createnode(n);
    traverse();
   // insetbegin();
    //insertend();
    //insertbtw();
    deletebegin();
    //deleteend();
   // deletebtw();
    //lasttofirst();
   // reverse();
   //reverserecu();
    traverse();
}
