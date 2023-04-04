# include <stdio.h>
# include <stdlib.h>
struct node
{
    char info[30];
    struct node *next;
};
struct node *start;
void create()
{   char ch='y';
    struct node *temp,*ptr;
    while(ch!='n')
    {
    temp=(struct node *)malloc(sizeof(struct node));
    printf("\n enter the node data: \n");
    scanf("%s",&temp->info);
    temp->next=NULL;
    if(start==NULL)
    {
        start=temp;
    }
    else
    {
        ptr=start;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=temp;
    }
    printf("\n Do you want to continue: \n");
    ch=getch();
    }
}
void display()
{
    struct node *ptr;
    if(start==NULL)
    {
        printf("\n list is empty \n");
    }
    else
    {
        ptr=start;
        while(ptr!=NULL)
        {
            printf("%s\t",ptr->info);
            ptr=ptr->next;
        }
    }
}
void uppercase()
{
    struct node *ptr,*temp,*ptr1;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->next=NULL;
    ptr=start;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
        if(ptr->info >='A' && ptr->info <= 'Z')
        {
            temp=ptr->info;
            ptr1=temp;
        }
            ptr1->next=temp->next;

    }
}
void main()
{
    create();
    display();
    uppercase();
    //display();
}
