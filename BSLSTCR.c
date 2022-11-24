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
void main()
{
    int choice;
    printf("Select the type of search:\n1.Linear Search\n2.Binary Search\n\n");
    printf("Enter the choice:\n");
    scanf("%d",&choice);
if(choice == 1)
{
printf("1.Linear Search:-\n");
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

   int array[500000], search, c, n, position;
   double start,end;

   printf("Number of elements in array\n");
   scanf("%d", &n);

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



}

 else if(choice == 2)
{
printf("2.Binary Search:-\n");

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



}
else
printf("Not a valid choice\n");


}
