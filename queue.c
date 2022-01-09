#include <stdio.h>
#include<stdlib.h>

typedef struct queue 
{
    int info;
    struct queue *next;
}QUE;

QUE *front=NULL,*rear=NULL;

void insert(int);
int deletion();
void display();
int menu();

int main()
{
    int ch,n;
    while(1)
    {
        ch=menu();
        switch(ch)
        {
            case 1: printf("insert data");
                    scanf("%d",&n);
                    insert(n);
                    break;
            case 2: deletion();
                    break;
            case 3: display();
                    break;
            case 4: exit(0);
        }
    }
return 0;
}

void insert(int n)
{
    QUE *newptr;
    int item;
    
    newptr=(QUE*)malloc(sizeof(QUE));
    newptr->info=item;
    newptr->next=NULL;
    if(rear==NULL){
        rear=newptr;
        front=newptr;
        return ;}
    else
       { rear->next=newptr;
        rear=newptr;}
   //initialize newptr

    //write the logic of insert function using your given algorithm which is already been discussed in theory class.
}
int deletion()
{
    int item;
    QUE *temp;
    if(front==NULL)
    {
       printf("queue is empty") ;
       return -99;
    }
    else{
        temp=front;
        front=front->next;
    }
    if(front==NULL){
        rear= NULL;
    }
    else{
        item=temp->info;
        free(temp);
        return item;
    }
     //write the logic of deletion function using your given algorithm which is already been discussed in theory class.
}
void display()
{
    QUE *temp=front;
    if(temp==NULL)
    {
        printf("\n queue is not built yet");
        return;
    }
    else
    {
        for(temp=front;temp!=rear->next;temp=temp->next)
            printf("  %d->",temp->info);
    }
    
}
int menu()
{
    int ch;
    printf("Enter 1 for queue insertion \n");
    printf("Rnter 2 for queue deletion \n");
    printf("Enter 3 for display \n");
    printf("Enter 4 for termination\n");
    printf("Enter your choice");
    scanf("%d", &ch);
    return ch;
}



