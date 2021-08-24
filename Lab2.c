//Author:Nitish Baloria
//Date of creation:5/6/21
//purpose of program:Implement a Stack using Array and develop functions to perform push and pop operations.

#include<stdio.h>
int stack[50],i,choice=0,n,top=-1;
void push();
void pop();
void show();
int main(){
	printf("Enter the number of elements in stack: ");
	scanf("%d",&n);
	while(choice!=4){
		printf("\nMain menu");
		printf("\n1.Push an element in the stack");
		printf("\n2.Pop an element in the stack");
		printf("\n3.Show an elements in the stack");
		printf("\n4.Exit the program");
		printf("\n Enter Your Choice ");
		scanf("%d",&choice);
		switch(choice){
			case 1: push();
			 break;
			 case 2: pop();
			 break;
			 case 3: show();
			 break;
			 case 4: printf("\nExit the program");
			 break;
			 default: printf("\n Please Enter Correct Choice");
			 
			        
		}
		
	}
}

void push(){
	int val;
	if(top==n)
	printf("\nOverflow");
	else{
		printf("\n Enter the value: ");
		scanf("%d",&val);
		top=top+1;
		stack[top]=val;
	}
}

void pop(){
	if(top==-1)
	printf("\nUnderflow");
	else{
		printf("\n Element %d poped from the stack\n",stack[top]);
		top=top-1;
	}
}

void show(){
	printf("\n Elements in the stack are:\n ");
	for(i=top;i>=0;i--){
		printf("%d\n",stack[i]);
	}
	if(top==-1){
		printf("\n Stack is empty");
	}
}
