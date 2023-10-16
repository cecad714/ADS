#include<stdio.h>
int main()
{
	int ar[10], n, i;
	
	printf("Enter the limit of array:");
	scanf("%d",&n);
	
	printf("\nEnter the array elements:");
	for(i=0;i<n;i++)
		scanf("%d",&ar[i]);
		
	printf("\nArray elements:");
	for(i=0;i<n;i++)
		printf("%d ",ar[i]);
		
	return 0;
}
