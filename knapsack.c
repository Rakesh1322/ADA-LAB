#include<stdio.h>
#include<conio.h>

int knapsack(int, int);
void object_selected(int,int);
int max(int,int);
int w[10],p[10],v[10][10],i,j;

int main()
{
    int n,m,solution;
    printf("Enter the no. of objects:\n");
    scanf("%d",&n);
    printf("Enter the capacity:\n");
    scanf("%d",&m);
    printf("Enter the weights of objectd:\n");
    for(i=1;i<=n;i++)
    {
        printf("Weight of w[%d] =\t",i);
        scanf("%d",&w[i]);
        printf("\n");
    }
    printf("Enter the profits of objects:\n");
    for(i=1;i<=n;i++)
    {
         printf("Profit of p[%d] =\t",i);
        scanf("%d",&p[i]);
        printf("\n");
    }

    solution = knapsack(n,m);
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=m;j++)
        {
           printf("%d\t",v[i][j]);
        }
        printf("\n");
    }

    printf("Optimal Solution = %d\n",solution);
    object_selected(n,m);
}

int knapsack(int n,int m)
{
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=m;j++)
        {
            if(i==0 || j==0)
                v[i][j] = 0;
            else
                if(w[i]>j)
                v[i][j] = v[i-1][j];
            else
                v[i][j] = max(v[i-1][j],v[i-1][j-w[i]]+p[i]);
        }
    }
    return v[n][m];
}

void object_selected(int n,int m)
{
    int x[10];
    i = n;
    j = m;
    while(i!=0 && j!=0)
    {
        if(v[i][j] != v[i-1][j])
        {
            x[i] = 1;
            j = j-w[i];
        }
        i--;
    }
    printf("Objects selected are:\n");
    for(i=1;i<=n;i++)
    {
        if(x[i]==1)
            printf("%d\t",i);
    }
}

int max(int x,int y)
{
    if(x>y)
        return x;
    else
        return y;
}
