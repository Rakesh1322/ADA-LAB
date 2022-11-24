#include <stdio.h>
#include <conio.h>
#include <time.h>

int a[100000],n;


delay()
{
    int temp,p;
    for(p=0;p<1000000;p++)
    {
       temp=45/85;
    }

}

void Qsort(int [],int,int);
int partition(int [],int,int);

void main()
{
    int i,j;
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
    Qsort(a,0,n-1);
    end = clock();
    printf("Sorted Array:\n");
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
    printf("Time for n=%d is %f ",n,((end - start))/CLOCKS_PER_SEC);
}

void Qsort(int a[],int low,int high)
{
    int mid;
    if(low < high)
    {
        delay();
        mid = partition(a,low,high);
        Qsort(a,low,mid-1);
        Qsort(a,mid+1,high);
    }
}

int partition(int a[],int low,int high)
{
    int i,j,temp,pivot;
    pivot = a[low];
    i = low + 1;
    j = high;
    while(i<=j)
    {
        while(a[i]<=pivot)
            i++;
        while(a[j]>pivot)
            j--;
        if(i<j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    temp = a[low];
    a[low] = a[j];
    a[j] = temp;
    return j;
}
