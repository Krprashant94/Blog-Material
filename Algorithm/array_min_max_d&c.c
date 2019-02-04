#include<stdio.h>

void minmax(int a[], int i, int j, int *min, int *max)
{
	int lmin, lmax;
	int rmin, rmax;
	int mid;
	if(i == j)
	{
		*max = a[i];
		*min = a[j];
	}
	else if(i == j + 1)
	{
		j = i + 1;
		if(a[i] > a[j])
		{
			*max = a[i];
			*min = a[j]; 
		}
		else
		{
			*max = a[j];
			*min = a[i];
		}
	}
	else
	{
		mid = (i + j)/2;
		minmax(a, i, mid, &lmin, &lmax);
		minmax(a, mid + 1, j, &rmin, &rmax);
		*min = lmin < rmin ? lmin : rmin;
		*max = lmax > rmax ? lmax : rmax;
	}
}

int main()
{
	int min, max;
	int i, n, a[10];
	printf("\nEnter no. of elements : ");
	scanf("%d", &n);
	printf("\nEnter array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	
	minmax(a,0,n-1,&min,&max);
	
	printf("\nMIN = %d, MAX = %d \n", min, max);
	return 0;
}
