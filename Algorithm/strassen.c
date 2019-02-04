#include<stdio.h>

int a[3][3], b[3][3], c[3][3];

void strassen()
{
	int p[8];
	
	p[1] = a[1][1] * (b[1][2] - b[2][2]);
	p[2] = (a[1][1] + a[1][2]) * b[2][2];
	p[3] = (a[2][1] + a[2][2]) * b[1][1];
	p[4] = a[2][2] * (b[2][1] - b[1][1]);
	p[5] = (a[1][1] + a[2][2]) * (b[1][1] + b[2][2]);
	p[6] = (a[1][2] - a[2][2]) * (b[2][1] + b[2][2]);
	p[7] = (a[1][1] - a[2][1]) * (b[1][1] + b[1][2]);
	
	c[1][1] = p[5] + p[4] - p[2] + p[6];
	c[1][2] = p[1] + p[2];
	c[2][1] = p[3] + p[4];
	c[2][2] = p[5] + p[1] - p[3] - p[7];
}

int main()
{
	int i, j;
	
	printf("\nEnter matrix A :\n");
	for(i=1 ; i<3; i++)
	{
		for(j=1 ; j<3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("\nEnter matrix B :\n");
	for(i=1; i<3; i++)
	{
		for(j=1; j<3; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	
	strassen();
	
	printf("\nMatrix C :\n");
	for(i=1; i<3; i++)
	{
		for(j=1; j<3; j++)
		{
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}
}
