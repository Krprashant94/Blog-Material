#include <stdio.h>

int BellmanFord(int G[20][20], int V, int E, int edge[20][2])
{
    int i,u,v,k, parent[20], distance[20], S, flag=1;

    for(i=0;i<V;i++)
    {
        distance[i] = 9999; parent[i] = -1;
    }
    printf("Enter source: ");
    scanf("%d", &S);
    distance[S-1] = 0;

    for(i=0;i<V-1;i++)
    {
        for(k=0;k<E;k++)
        {
            u = edge[k][0]; v = edge[k][1];
            if(distance[v] > distance[u] + G[u][v])
            {
                distance[v] = distance[u] + G[u][v];
                parent[v] = u;
            }
        }
    }

    for(k=0;k<E;k++)
    {
        u=edge[k][0]; v = edge[k][1];
        if(distance[v] > distance[u] + G[u][v])
        {
            flag = 0;
        }
    }
    if(flag)
    {
        for(k=0;k<V;k++)
        {
            printf("Vertex %d: Cost %d and Parent is %d \n", k+1, distance[k], parent[k]+1);
        }
    }
    return flag;
}

int main()
{
    int i,j,k=0, V, edge[20][2], G[20][20];
    printf("Enter the number of vertices :"); scanf("%d", &V);
    printf("Enter the graph matrix: \n");

    for(i=0;i<V;i++)
    {
        for(j=0;j<V;j++)
        {
            scanf("%d", &G[i][j]);
            if(G[i][j] != 0 )
            {
                edge[k][0] = i; edge[k][1] = j;
                k++;
            }
        }
    }
    printf("So number of edges = %d \n", k);

    if(BellmanFord(G,V,k,edge))
        printf("No negative cycle \n");
    else
        printf("Negative cycle present \n");

    return 0;
}
