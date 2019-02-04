#include <stdio.h>
int vis[20], a[20][20], top=-1, front = 0, rear = -1, stack[20], q[20];
void push(int item)
{
	if (top == 19)
	{
		printf("Overflow");
		return;
	}
	else
		stack[++top] = item;
}
int pop()
{
	int k;
	if (top == -1)
	{
		//printf("Empty");
		return 0;
	}
	else
	{
		k = stack[top--];
		return k;
	}
}
void dfs(int s,int n)
{
	int i, k;
	push(s);
	vis[s] = 1;
	k = pop();
	if(k != 0)
		printf("%d ", k);
	while(k!=0)
	{
		for(i = 1;i <= n;i++)
		{
			if((a[k][i] != 0) && (vis[i] == 0))
			{
				push(i);
				vis[i] = 1;
			}
			k=pop();
			if(k != 0)
				printf("%d ", k);
		}
	}
	for(i = 1; i <= n; i++)
	{
		if(vis[i] == 0)
			dfs(i, n);
	}
}
void insert(int item)
{
	if(rear == 19)
	{
		printf("Overflow");
		return;
	}
	else
	{
		if(rear == -1)
			q[++rear] = item;	
		else
			q[++rear] = item;
	}
}
int delete()
{
	int k;
	if((front > rear) || (front == -1))
	{
		//printf("Empty");
		return 0;
	}
	else
	{
		k = q[front++];
		return k;
	}
}
void bfs(int s, int n)
{
	int p, i;
	insert(s);
	vis[s] = 1;
	p = delete();
	while(p != 0)
	{
		for(i=1; i <= n; i++)
		{
			if((a[p][i] != 0) && (vis[i] == 0))
			{
				insert(i);
				vis[i] = 1;
			}
		}
		p = delete();
		if(p != 0)
			printf("%d ",p);
	}
	for(i = 1;i <= n; i++)
	{
		if(vis[i] == 0)
			bfs(i, s);
	}
}		
int main()
{
    int i, j, n, ch;
    printf("Enter number of vertices:");
    scanf("%d", &n);
    printf("Enter adjecency matrix of the graph:\n");
    for(i = 1;i <= n;i++)
       for(j = 1;j <= n;j++)
            scanf("%d",&a[i][j]);
   	for(i = 1;i <= n;i++)
		vis[i]=0;     
	printf("1.BFS \n2.DFS\n");
	scanf("%d",&ch);
	if(ch==1)
	{
		printf("1 ");
		bfs(1,n);
	}
    else if(ch==2)
    	dfs(1,n);
    return 0;
}
