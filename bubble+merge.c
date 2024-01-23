//read two arrays and sort it using bubble sort and merge them as a single array//
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a1[10], a2[10], m, n, merge[50], ml, i, j, k, temp;

    printf("Enter the size of array1:");
    scanf("%d",&m);
    printf("\nEnter the elements of array1:");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a1[i]);
    }

    printf("\nEnter the size of array2:");
    scanf("%d",&n);
    printf("\nEnter the elements of array2:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a2[i]);
    }

    printf("\n before sorting  ARRAY1:");
    for(i=0;i<m;i++)
    {
        printf(" %d", a1[i]);
    }

    for(i=0;i<m-1;i++)
    {
        for(j=0; j<m-i-1;j++)
        {   
            if(a1[j]> a1[j+1])
            {
                temp = a1[j+1];
                a1[j+1]=a1[j];
                a1[j]= temp;
            }
        }
    }

    printf("\n sorted ARRAY1:");
    for(i=0;i<m;i++)
    {
        printf(" %d", a1[i]);
    }

    printf("\n before sorting ARRAY2:");
    for(i=0;i<n;i++)
    {
        printf(" %d", a2[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0; j<n-i-1;j++)
        {   
            if(a2[j]> a2[j+1])
            {
                temp = a2[j+1];
                a2[j+1]=a2[j];
                a2[j]= temp;
            }
        }
    }

    printf("\n sorted ARRAY2:");
    for(i=0;i<n;i++)
    {
        printf(" %d", a2[i]);
    }

    i = 0;
    j = 0;
    k=0;

    while(i<m && j<n)
    {
        if(a1[i]< a2[j])
        {
            merge[k] =a1[i];
            i++;
        }
        else
        {
            merge[k] =a2[j];
            j++;            
        }
        k++;
    }
    
    while (i<m)
    {
        merge[k] = a1[i];
        i++;
        k++;
    }
    
    while(j<n)
    {
        merge[k]=a2[j];
        j++;
        k++;
    }

    printf("\nMerged Array: ");
    for(i = 0;i<m+n;i++)
    {
        printf(" %d ", merge[i]);
    }
return 0;
}