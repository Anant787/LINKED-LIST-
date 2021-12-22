#include<stdio.h>
#include<malloc.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

void insert(node **hd,node **temp, int x)
{
    node *newnode;
    newnode=(node*)malloc(sizeof(int));
    if(newnode==NULL)
    {
        printf("MEMORY IS NOT ALLOCATED!!! \n");
    }
    else
    {
        newnode->data=x;
        newnode->next=NULL;
        if(*hd==NULL)
        {
            *hd=newnode;
            *temp=newnode;
        }
        else
        {
            (*temp)->next=newnode;
            *temp=newnode;
        }
    }
    
}

void display(node **hd)
{
    node *temp;
    temp=*hd;
    if(*hd=NULL)
    {
        printf("LIST IS EMPTY!!! \n");
    }
    else
    {
        printf("LIST IS - ");
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
}
int main()
{
    node *hd=NULL;
    node *temp=NULL;
    int ch,n;
    do
    {
        printf("\n1-INSERT \n2-DISPLAY \n0-EXIT \n");
        printf("ENTER THE CHOICE - \n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
             printf("Enter the data - ");
             scanf("%d",&n);
             insert(&hd,&temp,n);
             break;
            case 2:
             display(&hd);
             break;
            case 0:
             printf("EXITING ....!!!\n");
             break;
            default:
             printf("INVALID CHARCTER U ENTERED !!!\n");
             break;
        }
    }while(ch!=0);
    return 0;
}
