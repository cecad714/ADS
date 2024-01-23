#include<stdio.h>

int main() {
    int a1[50], a2[50], merge[100];
    int m, n, i = 0, j = 0, k = 0;

    printf("Enter the limits of both arrays:");
    scanf("%d%d", &m, &n);

    printf("\nEnter the elements of first array:");
    for (i = 0; i < m; i++)
        scanf("%d", &a1[i]);

    printf("\nEnter the elements of second array:");
    for (j = 0; j < n; j++)  // Use j as the loop control variable for array a2
        scanf("%d", &a2[j]);

    i = 0;  // Reset i to 0 to start merging from the beginning of a1
    j = 0;  // Reset j to 0 to start merging from the beginning of a2

    while (i < m && j < n) {
        if (a1[i] < a2[j]) {
            merge[k] = a1[i];
            i++;
        } else {
            merge[k] = a2[j];
            j++;
        }
        k++;
    }

    while (i < m) {
        merge[k] = a1[i];
        i++;
        k++;
    }

    while (j < n) {
        merge[k] = a2[j];
        j++;
        k++;
    }

    printf("\nMerged Array:");
    for (i = 0; i < m + n; i++) {
        printf(" %d", merge[i]);
    }

    return 0;
}

