#include<stdio.h>

void insert(int);
//void delete();
void display();

int arr[10],front=-1,rear=-1;
void main()
 {
 	int num,temp;
 do
 {
   printf("1 for insert \t 2 for delete \t 3 for display \t4 for exit");
   scanf("%d",&num);
   switch(num)
    {
    	case 1:
    	printf("Enter element");scanf("%d",&temp);
    	insert(temp);
    	break;
    	case 2:
    	//delete();
    	break;
    	case 3:
    	display();
    	break;
    	case 4:
    	//exitCustom();
    	break;
    }
  }while(num<4);
}
void insert(int a)
 {
 	if(rear>9)
 		{
         printf("Queue is full");
 		}
  else
  {		
    if(rear==-1){rear=0;}
    arr[rear++]=a;	 
    printf("\nElement Inserted");
  }

 }

void delete()
 {
   if(front==-1 || front>rear)
   	 {
   	 	pritnf("Queue is underflow");
   	 }
   	 else
   	 {
   	 	front++;
   	 }

 }

void display()
  {
  	int i;
    if(rear==-1)
     {
     	printf("Queue is Empty");
     }	
     else
     {
     	if(front==-1)
     		 {
     		 	front++;
     		 }
     	printf("Queue: \n");
     	for(i=front;i<=rear;i++)
     		 {
     		 	printf("%d\n",arr[i]);
     		 }
     }
  }