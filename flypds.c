#include<stdio.h>

int flyods();
int min(int, int);
int C[10][10],D[10][10],i,j,k,n;

int main()
{
    printf("Enter the no. of vertices:\n");
    scanf("%d",&n);
    printf("Enter the adjacency matrix:\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&C[i][j]);
        }
    }
    flyods();
    printf("Distance Matrix:\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d",D[i][j]);
            printf("\t");
        }
        printf("\n");
    }
}

int flyods()
{
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            D[i][j] = C[i][j];
        }
    }
    for(k=1;k<=n;k++)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                D[i][j] = min(D[i][j],D[i][k] + D[k][j]);
            }
        }
    }
}

int min(int x ,int y)
{
    if(x<y)
        return x;
    else
        return y;
}
