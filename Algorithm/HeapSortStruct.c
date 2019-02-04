#include <stdio.h>

typedef struct student
{
    int roll;
    char name[30];
    double grade;
}student;

void swap(student *x, student *y)
{
    student temp = *x;
    *x = *y;
    *y = temp;
}

void heapify(student a[], int n, int i)
{
    int largest = i;
    int l = 2*i + 1, r = 2*i + 2;

    if(l<n && a[l].grade>a[largest].grade) largest = l;
    if(r<n && a[r].grade>a[largest].grade) largest = r;

    if(largest!=i)
    {
        swap(&a[i], &a[largest]);

        heapify(a,n,largest);
    }
}

void HeapSort(student a[], int n)
{
    int i;
    for(i= (n/2) - 1; i>=0; i--)
    {
        heapify(a,n,i);
    }

    for(i=n-1;i>=0;i--)
    {
        swap(&a[0], &a[i]);

        heapify(a,i,0);
    }
}

int main()
{
    int i,n;
    student a[50];
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter array: (roll, name, grade)\n ");
    for(i=0;i<n;i++)
    {
        printf("Enter element %d :", i);
        scanf("%d", &a[i].roll);
        scanf("%s", &a[i].name);
        scanf("%lf", &a[i].grade);
    }

    HeapSort(a,n);

    printf("Sorted array: ");
    for(i=0;i<n;i++)
        printf("%d %s %lf \n",a[i].roll, a[i].name, a[i].grade);

    return 0;
}
