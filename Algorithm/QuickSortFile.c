#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int partition(int a[], int low, int high)
{
    int i, p = a[high], p_index = low;

    for(i=low;i<high;i++)
    {
        if(a[i] <= p)
        {
            swap(&a[i], &a[p_index]);
            p_index++;
        }

    }
    swap(&a[p_index],&a[high]);
    return p_index;
}

void quicksort(int a[], int low, int high)
{
    if(low<high)
    {
            int p = partition(a,low,high);
            quicksort(a,low,p-1);
            quicksort(a,p+1,high);

    }
}

int main()
{
    int a[50],n,i;
    FILE *fptr;
    printf("Enter n: ");
    scanf("%d",&n);
    fptr = fopen("Sorting.txt", "r");
    if(fptr == NULL)
    {
        printf("Error opening Sorting.txt");
        return 1;
    }
    for(i=0;i<n;i++)
    {
        fscanf(fptr, "%d", &a[i]);
    }
	fclose(fptr);
    quicksort(a,0,n-1);

    
    fptr = fopen("Output.txt","w");
    if(fptr==NULL)
    {
        printf("Error opening output.txt");
        return 1;
    }
    for(i=0;i<n;i++)
    {
        fprintf(fptr,"%d ", a[i]);
    }

    return 0;
}
