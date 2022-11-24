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
int main()
{
  int array[500000], search, c, n;

  printf("Enter number of elements in array\n");
  scanf("%d", &n);


  for (c = 0; c < n; c++)
   {
    array[c] = c;
   }

  search = array[n-1];

    double start,end;
    start = clock();
  for (c = 0; c < n; c++)
  {
      delay();
    if (array[c] == search)

    {
      printf("%d is present at location %d.\n", search, c+1);
      break;
    }
  }
    if(c==n)
        printf("%d not found in the array");

 end = clock();


    printf("Time for n=%d is %2f ",n,((end - start))/CLOCKS_PER_SEC);

  return 0;
}
