#include <stdio.h>
#include <time.h>

void selection_sort(int [],int);
delay()
{
    int temp,p;
    for(p=0;p<1000000;p++)
    {
       temp=45/85;
    }

}

int main()
{
    int i,n,a[100000];
    double start,end;
    printf("Enter the of elements:\n");
    scanf("%d",&n);

    printf("Array elements:\n");
    for (i = 0; i < n; i++)
           {
            a[i] = rand()%13;
           }
    for(i = 0; i< n; i++)
    printf("%d\n",a[i]);

    start = clock();
    selection_sort(a,n);
    end = clock();

    printf("Sorted array\n");
    for(i = 0; i< n; i++)
    printf("%d\n",a[i]);
    printf("Time for n=%d is %f ",n,((end - start))/CLOCKS_PER_SEC);

}

void selection_sort(int a[10],int n)
{
    int i,j,temp,small,pos;

    for(i = 0; i<n-2; i++)
    {
        small = a[i];
        pos = i;

        for(j = i+1; j<=n-1; j++)
        {
            delay();
            if(a[j]<small)
            {
                small = a[j];
                pos = j;
            }
        }
        temp = a[pos];
        a[pos] = a[i];
        a[i] = temp;
    }
}
