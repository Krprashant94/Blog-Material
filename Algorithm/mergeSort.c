#include<stdio.h>

void merge(int a[], int l, int m, int r)
{
	int L[5], R[5];
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;

	for(i=0; i<n1; i++)
		L[i] = a[l + i];
	
	for(j=0; j<n2; j++)
		R[j] = a[m + 1 + j];
	
	i=0, j=0, k=l;
	
	while(i < n1 && j < n2)
	{
		if(L[i] <= R[j])
		{
			a[k++] = L[i++];
		}
		else
		{
			a[k++] = R[j++];
		}
	}
	
	while(i < n1)
	{
		a[k++] = L[i++];
	}
	
	while(j < n2)
	{
		a[k++] = R[j++];
	}
}

void mergesort(int a[], int l, int r)
{
	int m;
	if(l<r)
	{
		m = (l + r)/2;
		mergesort(a, l, m);
		mergesort(a, m+1, r);
		merge(a,l,m,r);
	}
}

int main()
{
	int a[5], i=0;
	printf("\nEnter the array (5 elements) : ");
	for(i=0;i<5;i++)
		scanf("%d", &a[i]);
	
	mergesort(a,0,4);
	
	printf("\nSorted array : ");
	for(i=0;i<5;i++)
		printf("%d ", a[i]);
	
	printf("\n");
	return 0;
}
