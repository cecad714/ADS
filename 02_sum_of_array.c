#include<stdio.h>
int main()
{
	int ar[10], n, i,s = 0;
	printf("Enter the limit of array:");
	scanf("%d",&n);
	
	printf("\nEnter the array elements:");
	for(i=0;i<n;i++)
		scanf("%d",&ar[i]);
		
	printf("\nArray elements:");
	for(i=0;i<n;i++)
		printf("%d ",ar[i]);
		
	for(i=0;i<n;i++)
		s=s+ar[i];
		
	printf("\n Sum of the Elements of the array are: %d",s);
	
	return 0;
}
