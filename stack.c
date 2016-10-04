#include<stdio.h>

 void push(int);
 void pop();
 int arr[10],top=-1;

void push(int a)
 {
 	if(top>9)
 	{
 		printf("Stack overflow");
 	}
 	else
 	{	
 	arr[++top] = a;
 	}

 }
void pop()
  {
  	if(top<0)
  	{
  		printf("Stack underflow");
  	}
  	else
  	{	
  	printf("poping %d",arr[top--]);
    }
  }

void main()
 {
    int num,choice;
 	
 	printf("Insert element into array");scanf("%d",&num);
 	push(num);
 do {
 	printf("1 for push.\n 2. for pop \n 3 for Exit");scanf("%d",&choice);
 	switch(choice)
 	  {
        case 1:
        printf("\nenter element to push");scanf("%d",&num);
        push(num);
        break;
        case 2:
        pop();
        break;
        default:
        printf("\nExiting");
 	    break;
 	  } 
    }while(choice<3);
}