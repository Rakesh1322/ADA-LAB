#include <stdio.h>

void BFS(int);
int a[10][10],vis[10],n;

void main()
{
    int i,j,src;
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
        vis[i] = 0;
    }
    printf("Enter the source vertex:\n");
    scanf("%d",&src);
    printf("Nodes reachable from %d vertex are \n",src);
    BFS(src);
}

void BFS(int v)
{
    int Q[10],f=0,r=0,u,i;
    vis[v] = 1;
    Q[r] = v;
    while(f <= r)
    {
        u = Q[f];
        printf("%d\t",u);
        for(i=1;i<=n;i++)
        {
            if(a[u][i] == 1 && vis[i] == 0)
            {
                vis[i] = 1;
                r = r+1;
                Q[r] = i;
            }
        }
        f = f+1;
    }
}
