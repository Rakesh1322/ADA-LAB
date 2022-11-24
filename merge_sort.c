#include <stdio.h>
#include <conio.h>
#include <time.h>

delay()
{
    int temp,p;
    for(p=0;p<1000000;p++)
    {
       temp=45/85;
    }

}

void mergesort(int [],int,int);
void merge(int [],int,int,int);

int main()
{
    int i,n,a[100000];
    double start,end;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Array elements:\n");
    for (i = 0; i < n; i++)
           {
            a[i] = rand()%100;
           }
    for(i = 0; i< n; i++)
    printf("%d\n",a[i]);

    start = clock();
    mergesort(a,0,n-1);
    end = clock();
    printf("Sorted Array:\n");
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
    printf("Time for n=%d is %f ",n,((end - start))/CLOCKS_PER_SEC);
}

void mergesort(int a[],int low,int high)
{
    int mid;
    if(low < high)
    {
        delay();
        mid = (low + high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid + 1,high);
        merge(a,low,mid,high);
    }
}

void merge(int a[],int low,int mid,int high)
{
    int i,j,k,c[100000];
    i = low;
    k = low;
    j = mid +1;
    while(i<=mid && j<=high)
    {
        if(a[i]<a[j])
            c[k++] = a[i++];
        else
        c[k++] = a[j++];
    }
    while(i<=mid)
        c[k++] = a[i++];
    while(j<=high)
        c[k++] = a[j++];
    for(i=low;i<=high;i++)
        a[i] = c[i];
}
