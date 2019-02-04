#include<stdio.h>

void swap(int a[], int x, int y)
{
	int t = a[x];
	a[x] = a[y];
	a[y] = t;

}

int partition(int a[], int low, int high)
{
	int l, r, p, p_item;
	l = p = low;
	r = high;
	p_item = a[l];
	
	while(l < r)
	{
		while(a[l] <= p_item)
			l++;
		
		while(a[r] > p_item)
			r--;
		
		if(l < r)
			swap(a, l, r);
	}
	
	a[low] = a[r];
	a[r] = p_item;
	
	return r;
}

void quicksort(int a[], int low, int high)
{
	int pi;
	if(low < high)
	{
		pi = partition(a, low, high);
		quicksort(a, low, pi-1);
		quicksort(a, pi+1, high);
	}
}

int main()
{
	int a[5], i=0;
	printf("\nEnter the array (5 elements) : ");
	for(i=0;i<5;i++)
		scanf("%d", &a[i]);
	
	quicksort(a,0,4);
	
	printf("\nSorted array : ");
	for(i=0;i<5;i++)
		printf("%d ", a[i]);
	
	printf("\n");
	return 0;
}
