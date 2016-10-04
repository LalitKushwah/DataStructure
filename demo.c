#include<stdio.h>
#include<malloc.h>

 struct node 
  {
    int info;
    struct node *next;
   }*start=NULL,*temp,*newnode;
void reverse(struct node *);
void main()
 {
   int num;
  do
  { 
   newnode = (struct node *)malloc(sizeof(struct node));
   printf("Enter info");scanf("%d",&newnode->info);
   printf("%d",newnode->info);
   newnode->next = NULL;
   if(start==NULL)
   	 {
   	 	start = newnode;
   	 	temp = start;
   	 }
   	else
   	 {
         temp ->next = newnode;
         temp = temp->next;

   	 } 
   	 printf("Do you want to continue");scanf("%d",&num);

  }while(num==1);
 
  reverse(start);
  


 	 
 while(start!=NULL)
   {
      printf("%d",start->info);
      start = start ->next;

   }

 }
 void reverse(struct node *p)
    {
          if(p->next==NULL)
          	 {
          	 	start = p;
          	 	return;
          	 }
          	reverse(p->next);
          	struct node *q = p->next;
          	q->next = p;
          	p->next = NULL; 

    }