#include<stdio.h>
int main()
{
	int ar[10], n, i,item,flag=0;
	printf("Enter the limit of array:");
	scanf("%d",&n);
	
	printf("\nEnter the array elements:");
	for(i=0;i<n;i++)
		scanf("%d",&ar[i]);
		
	printf("\nEnter the item to be searched:");
	scanf("%d",&item);
		
	for(i=0;i<n;i++)
	{
		if(ar[i] == item)
		{
			printf("\n %d found at position %d",item,i+1);
			flag++;	
			break;
		}
	}
		
	if(flag==0)
		printf("\n%d not found in the array!!!",item);
	
	return 0;
}
