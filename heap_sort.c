#include<stdio.h>
#include<time.h>

void heapsort(int [],int);

void delay()
{
    int i,temp;
    for(i=0;i<=5000000;i++)
    {
        temp = 45/963;
    }
}

void main()
{
    int n,i,a[10000];
    double start,end;
    printf("Enter the no. of elements:\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    start = clock();
    heapsort(a,n);
    end = clock();
    printf("Sorted Array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("Time for n=%d is %2f ",n,((end - start))/CLOCKS_PER_SEC);
}

void heapsort(int a[],int n)
{
    int i,temp;
    heapcons(a,n);
    for(i=n-1;i>0;i--)
    {
        delay();
        temp = a[0];
        a[0] = a[i];
        a[i] = temp;
        heap_adj(a,i);
    }
}

void heapcons(int a[],int n)
{
    int i,j,k,item;
    for(k=1;k<n;k++)
    {
        item = a[k];
        i = k;
        j = (i-1)/2;
        while(i>0 && item > a[j])
        {
            a[i] = a[j];
            i = j;
            j = (i-1)/2;
        }
        a[i] = item;
    }
}

void heap_adj(int a[],int n)
{
    int i,j,item;
    j = 0;
    item = a[j];
    i = (2*j)+1;
    while(i<=n-1)
    {
        if(i+1 <= n-1)
        {
            if(a[i] < a[i+1])
            {
                i++;
            }
        }
        if(item<a[i])
        {
            a[j] = a[i];
            j = i;
            i = 2*j+1;
        }
        else
            break;
    }
    a[j] = item;
}
