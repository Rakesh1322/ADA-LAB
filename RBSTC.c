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

int binarySearch(int [], int, int, int);

int main()
{
  int c, first, last, n, search, array[500000], index;
  double start,end;

  printf("Enter number of elements\n");
  scanf("%d", &n);

  for (c = 0; c < n; c++)
   {
    array[c] = c;
   }

  search = array[n-1];

  first = 0;
  last = n - 1;
  start = clock();
  index = binarySearch(array, first, last, search);
 end = clock();
  if (index == -1)
    printf("Not found! %d isn't present in the list.\n", search);
  else
    printf("%d is present at location %d.\n", search, index + 1);

     printf("Time for n=%d is %f ",n,((end - start))/CLOCKS_PER_SEC);

  return 0;
}

int binarySearch(int a[], int s, int e, int f)
 {
  int m;

  if (s > e)
     return -1;

  m = (s + e)/2;
  delay();

  if (a[m] == f)
    return m;
  else if (f > a[m])
    return binarySearch(a, m+1, e, f);
  else
    return binarySearch(a, s, m-1, f);
}
