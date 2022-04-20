#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}nodetype;
nodetype* Enqueue(nodetype *);
nodetype* Dequeue(nodetype *);
void display(nodetype *);

int main()
{
    nodetype *rear=NULL, *front = NULL;
    int ch;
    do
    {
        /* code */
        printf("\n 1 insert\n 2 delete\n 3 display \n exist\n Enter your choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            rear= Enqueue(rear);
            if(front==NULL)
            front=rear;
            break;
            case 2:
            front = Dequeue(front);
            if(front==NULL)
            rear=front;
            break;
            case 3:
            display(front);
            break;
        }  //End of switch case;
    } while (ch<=3); // End of do while loop;
    } //end of main function;
    
    nodetype* Enqueue(nodetype *rear)
    {
        int n;
        nodetype *ptr=NULL;
        ptr=(int*)malloc(sizeof(nodetype));
        if(ptr!=NULL){
         scanf("%d", &n);
         ptr->data=n;
         if(rear==NULL)
         {
         rear=ptr;
         }
         else{
         rear->next=ptr;
         rear=ptr;
         }
         rear->next=NULL;
        }
         return rear;
    }
    nodetype* Dequeue(nodetype *front)
    {
        nodetype* temp;
        temp=front;
        if(front==NULL)
        printf("nothing to be deleted \n");
        else{
            printf("\n deleted node data is %d ",front->data);
            front=front->next;
            free(temp);
        }
        return front;

    }
    void display(nodetype *front)
    {
        if(front==NULL)
        printf("\n nothing to be deleted ");
        else{
            printf("the data in node is %d" ,front->data);
            front=front->next;
        }
    }