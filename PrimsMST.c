#include<stdio.h>

void prims();

int cost[10][10],vis[10],vt[10],et[10][10],e=0,i,j,k,u,v,sum=0,n,m;

void main()
{
    printf("Enter thr no.of vertices:\n");
    scanf("%d",&n);

    printf("Enter the cost adjacency matrix:\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&cost[i][j]);
        }
    }
    for(i=1;i<=n;i++)
        vis[i]=0;
    prims();
    printf("Minimum Spanning Tree\n");
    for(i=1;i<=e;i++)
    {
        printf("%d\t------>\t\t%d\n",et[i][1],et[i][2]);
    }
    printf("Total cost = %d",sum);
}

void prims()
{
    int x=1,min;
    vt[x] = 1;
    vis[x] = 1;
    for(i=1;i<=n;i++)
    {
        j = x;
        min = 9999;
        while(j>0)
        {
            k = vt[j];
            for(m=2;m<=n;m++)
            {
                if(cost[k][m]<min && vis[m]==0)
                {
                    min = cost[k][m];
                    u = k;
                    v = m;
                }
            }
            j--;
        }
        vt[++x] = v;
        et[i][1] = u;
        et[i][2] = v;
        e++;
        vis[v] = 1;
        sum = sum + cost[u][v];
    }
}
