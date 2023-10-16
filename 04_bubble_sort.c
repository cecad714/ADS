#include<stdio.h>
int main()
{
	int ar[10], n, i,j, t;
	printf("Enter the limit of array:");
	scanf("%d",&n);
	
	printf("\nEnter the array elements:");
	for(i=0;i<n;i++)
		scanf("%d",&ar[i]);
		
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		{	
			if(ar[j]>ar[j+1])
			{
			t=ar[j];
			ar[j]=ar[j+1];
			ar[j+1]=t;
			}
		}
	}

	printf("\n Sorted Array = ");	
	for(i=0;i<n;i++)
	{
			printf("%d ",ar[i]);
	}
		

	return 0;
}
