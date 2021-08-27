  // Author: NITISH BALORIA
  // purpose :Implement a Queue using Array and develop functions to perform enqueue and dequeue operations.
           
#include<stdio.h> //  Pre-Processive to include standard input and output funtion header files

#include<stdlib.h>  // Pre-Processive to include standard Libraray funtion header files (only Used for Exit function)

int queue[50], n,choice, rear = -1,front = -1; 
void insert();  
void delete();
void display();
int main(){
    printf("Enter the size of queue: ");
    scanf("%d",&n);
    printf("\n\n\t  <> MENU FOR Queue <>\n\n");
    while(1)
	{
    	
        printf("\nEnter 1 to Insert element in queue.");
        printf("\nEnter 2 to Delete element in queue.");
        printf("\nEnter 3 to Display element in queue.");
        printf("\nEnter 4 to Exit.");
        printf("\n\nEnter the choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1: insert();
                        break;
            case 2: delete();
                        break;
            case 3: display();
                        break;
            case 4: exit(0);
            default:printf("\n\n\t**See menu Program carefully*\n\n ");
        }
    }
    return 0;
}

void insert(){
	int element;
	printf("\nEnter the element\n");
	scanf("\n%d",&element);
    if (rear == n -1){	
        printf("\nQueue is in  overflow\n");
    }
    else{
    	if(front==-1 && rear==-1){
    		front=0;
    		rear=0;
		}
		else{
			rear=rear+1;
		}
		queue[rear]=element;
		printf("\n Value is inserted ");
    }
}

void delete(){
	int element;
    if(front == -1 || front > rear)
        printf("\nQueue is in underflow \n");
    else {
        element=queue[front];
        printf("\nDeleted:%d",element);
        if(front==rear){
        	front=-1;
        	rear=-1;
		}
		else{
			 front = front + 1;
		}
		printf("\n Value is deleted");
    }
}

void display(){
	int i;
    if(rear== -1){
        printf("\n Empty Queue");
    }
    else{
        printf("\nElements of the queue:\n");
        for(i = front; i <= rear; ++i){
            printf("\n%d\n",queue[i]);
        }
    }
}
