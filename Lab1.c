// Author: Nitish Baloria
// Purpose:Implement a List using Array and develop functions to perform insertion, deletion and linear search operations.
#include<stdio.h> 
int search(int arr[]);
int insert(int arr2[]);
int delelement(int arr3[]);
int main()  
{
    int arr1[50]; 
    int ch;
   do{
    printf("\"Select any option from below\"\n");
	printf("1.Search an element from the Array\n");
    printf("2.Insert an element in an Array\n");
    printf("3.Delete an element from the Array\n");
    printf("4.Exit the Program\n");
    printf("\nEnter your choice : ");
    scanf("%d",&ch);
    switch(ch)
    {
    	case 1:
    	printf("You choose to Search an element from the Array");
		search(arr1);
		break;
		case 2:
		printf("You choose to Insert an element from the Array");	
		insert(arr1);
		break;
		case 3:
		printf("You choose to Delete an element from the Array\n");
		delelement(arr1);
		break;
		case 4:
		printf("You have exit the Program");
		return 0;	
	}
	printf("\n\n");
	}while(ch!=4);
}
	int search(int arr[])
	{
		int size,i,ele,found;
		printf("\nEnter the size of the array : ");
		scanf("%d",&size);
		printf("\nEnter %d elements : ",size);
		for(i=0;i<size;i++)
		{
			scanf("%d",&arr[i]);
		}
		printf("\nElements of Array are : ");
		for(i=0;i<size;i++)
		{
			printf("%d ",arr[i]);
		}
		printf("\nEnter the element that you want to search : ");
		scanf("%d",&ele);
		
		for(i=0;i<size;i++)
		{
			if(arr[i]==ele)
			{
				found=1;
				break;		
			}
		}
			if(found==1)
			{
				printf("\n%d is found at %d position in the array\n",ele,i+1);
			}
			else
			printf("\n%d is not found in the array\n",ele);	
			return 0;
	}
	
	int insert(int arr2[])
	{
		int n,s,j;
		printf("\nEnter the size of the Array : ");
		scanf("%d",&s);
			for(j=0;j<s;j++)
		{
			scanf("%d",&arr2[j]);
		}
		printf("\nArray before insertion of element : ");
			for(j=0;j<s;j++)
		{
			printf("%d ",arr2[j]);
		}
		printf("\nEnter the number that you want to insert in the Array at the End : ");
		scanf("%d",&n);
		s=s+1;
		arr2[s-1]=n;
		printf("\nArray after insertion of %d is : ",n);
		for(j=0;j<s;j++)
		{
			printf("%d ",arr2[j]);
		}
	}
	
	int delelement(int arr3[])
	{
		int k,len,pos;
		printf("Enter the size of the array : ");
		scanf("%d",&len);
		for(k=0;k<len;k++)
		{
			scanf("%d",&arr3[k]);
		}
		printf("Array before deletion of elements : ");
		for(k=0;k<len;k++)
		{
			printf("%d ",arr3[k]);
		}
		printf("\nEnter the Index from where you want to delete an element : ");
		scanf("%d",&pos);
		len=len-1;
		for(k=pos;k<len;k++)
		{
			arr3[k]=arr3[k+1];
		}
		printf("\nArray after deletion of element : ");
		for(k=0;k<len;k++)
		{
			printf("%d ",arr3[k]);
		}	
	}