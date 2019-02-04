#include <stdio.h>
#include <stdlib.h>
int x[20], n;

void display()
{
    printf("Possible arrangement: \n");
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(x[i] == j) printf(" 1 ");
            else printf(" 0 ");
        }
        printf("\n");
    }
}

int place(k,i)
{
    int j;
    for(j=1;j<=k-1;j++)
    {
        if(x[j] == i || abs(x[j]-i) == abs(j-k))
            return 0;
    }
    return 1;
}

void NQueen(k)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        if(place(k,i))
        {
            x[k] = i;
            if(k==n) display();
            else NQueen(k+1);
        }
    }
}

int main()
{
    printf("Enter n :");
    scanf("%d", &n);
    printf("\n");
    NQueen(0);
}
