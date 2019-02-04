#include<stdio.h>
#include<limits.h>

int chainmatrixmul(int p[], int n)
{
	int m[100][100], i, j, k, l, q;
	for(i=0;i<n;i++)
		m[i][i] = 0;
	
	for(l=2; l <= n-1; l++)
	{
		for(i=1; i <= n-l ; i++)
		{
			j = i + l - 1;
			m[i][j] = INT_MAX;
			for(k=i; k<=j-1; k++)
			{
				q = m[i][k] + m[k+1][j] + p[i-1]*p[k]*p[j];
				if(q<m[i][j])
					m[i][j] = q;
			}
		}
	}
	return m[1][n-1];
}

int main()
{
	int p[100], n, i;
	int cost;
	printf("\nEnter number of matrices : ");
	scanf("%d", &n);
	printf("\nEnter order of chain of matrices : ");
	for(i=0; i<=n; i++)
	{
		scanf("%d", &p[i]);
	}
	cost = chainmatrixmul(p, n+1);
	printf("\nThe cost is : %d\n", cost);
	return 0;
}
