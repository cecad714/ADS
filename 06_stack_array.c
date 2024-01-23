#include<stdio.h>
#include<stdlib.h>
	
#define MAX_SIZE 50

int STACK[MAX_SIZE];
int TOP = -1;

void push()
{
	if(TOP == MAX_SIZE-1)
	{
		printf("\n STACK OVERFLOW");
	}
	else
	{
		int item;
		printf("\n ENTER THE ITEM TO BE ADDED TO THE STACK:");
		scanf("%d",&item);
		TOP++;
		STACK[TOP] = item;
		printf("\n %d  ADDED TO THE STACK\n\n",item);
		
	}
}

void pop ()
{
	if(TOP == -1)
	{
		printf("\n STACK UNDERFLOW");
	}
	else
	{
		int item;
		item = STACK[TOP];
		TOP--;
		printf("\n %d DELETED FROM THE STACK\n\n", item);	
	}
}

void display()
{
	printf("\n STACK: \n");
	for (int i = TOP; i > -1; i-- )
	{
		printf(" %d \n",STACK[i]);	
	}
}

void search()
{	
	int se,flag=0;
	printf("\n ENTER THE  ELEMENT TO BE SEARCHED:");
	scanf("%d",&se);
	for (int i = TOP; i > -1; i--)
	{
		if(STACK[i] == se)			
		{
			printf(" %d FOUND IN THE STACK\n\n ",se);
			flag++;
			break;
		}
							
	}
	if(flag==0)
	{
		printf(" %d NOT FOUND  IN THE STACK\n\n ",se);
	}
}


int main()
{
	int choice;
	do
	{
	printf("STACK USING ARRAY");
	printf("CHOOSE YOUR OPTION:");
	printf("\n'1' FOR PUSH \n '2' FOR POP \n '3' FOR DISPLAY \n'4' FOR SEARCHING \n'5' FOR EXIT");  
	scanf("%d",&choice);

		switch (choice)
		{
			case 1: push();
				break;
				
			case 2: pop();
				break;
				
			case 3: display();
				break;
				
			case 4: search();
				break;
				
    			case 5: exit(0);
    			
    			default: printf("\n INVALID INPUT\n TRY AGAIN!!");
    				break;
    		}
    	}while(choice!=5);
    return 0;
}

