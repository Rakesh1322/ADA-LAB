#include <stdio.h>
#include <time.h>


delay()
{
    int temp,p;
    for(p=0;p<1000000;p++)
    {
       temp=45/85;
    }

}
void insertion_sort(int [],int);

void main()
{
    int a[100000],n,i;
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
    insertion_sort(a,n);
    end = clock();

    printf("Sorted array\n");
    for(i = 0; i< n; i++)
    printf("%d\n",a[i]);
    printf("Time for n=%d is %f ",n,((end - start))/CLOCKS_PER_SEC);

}

void insertion_sort(int a[10],int n)
{
    int i,j,y;
    for(i=1;i<n;i++)
    {
        y = a[i];
        j = i-1;
        while(j>=0 && a[j]>y)
        {
            delay();
            a[j+1] = a[j];
            j = j - 1;
        }
        a[j+1] = y;
    }
}
