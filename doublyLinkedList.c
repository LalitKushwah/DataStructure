#include<stdio.h>
#include<malloc.h>

struct node
 {
   int info;
   struct node *prev;
   struct node *next;
 }*newnode,*start=NULL,*temp;

 void main()
  {
  	int value;
   do{ 
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter info");scanf("%d",&newnode->info);
    if(start==NULL)
    	 {
    	 	start = newnode;
    	 	temp = start;
    	 	start->next=NULL;
    	 }

    temp->next = newnode;
    newnode->prev = temp;	
    temp->next = temp;
    temp->next = NULL; 
    printf("\nPress 1 to continue Any other key to exit");scanf("%d",&value);
  }while(value==1);

printf("\nResultant Data fields");
  while(start!=NULL)
  	 {
  	 	printf("\n%d",start->info);
  	 	start = start->next;
  	 }

  }