#include <stdio.h>

int a[10][10],vis[10],n,flag=1;
void DFS(int);

void main()
{
    int i,j,k;
    printf("Enter the number of vertices:");
    scanf("%d",&n);
    printf("Enter the adjacency matrix:\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        vis[j] = 0;
        DFS(i);
        for(k=1;k<=n;k++)
        {
            if(vis[k] == 0)
            flag = 0;
        }
    }
    if(flag == 0)
        printf("Graph is not connected\n");
    else
        printf("Graph is connected\n");
}

void DFS(int v)
{
    int i;
    vis[v] = 1;
    for(i=1;i<=n;i++)
    {
        if(a[v][i]==1 && vis[i]==0)
        {
            DFS(i);
        }
    }
}
