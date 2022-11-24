#include <stdio.h>
#include <time.h>

int linear_search(int [], int, int);
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
   int array[500000], search, c, n, position;
   double start,end;

   printf("Number of elements in array\n");
   scanf("%ld", &n);

         for (c = 0; c < n; c++)
           {
            array[c] = c;
           }
    search = array[n-1];
    start = clock();
    position = linear_search(array, n, search);
    end = clock();
   if (position == -1)
      printf("%d isn't present in the array.\n", search);
   else
      printf("%d is present at location %d.\n", search, position+1);

      printf("Time for n=%d is %2f ",n,((end - start))/CLOCKS_PER_SEC);

   return 0;


}

int linear_search(int a[], int n, int find)
{
   int c;

   for (c = 0 ;c < n ; c++ )
   {
        delay();
      if (a[c] == find)
         return c;
   }

   return -1;
}
