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

 else if(choice == 2)
{
printf("2.Binary Search:-\n");
int c, first, last, middle, n, search, array[500000];
  double start,end;

  printf("Enter number of elements\n");
  scanf("%d", &n);

  for (c = 0; c < n; c++)
   {
    array[c] = c;
   }

  search = array[n-1];
    start =clock();
  first = 0;
  last = n - 1;
  middle = (first+last)/2;

  while (first <= last)
   {
       delay();
    if (array[middle] < search)
      first = middle + 1;
    else if (array[middle] == search)
    {
      printf("%d found at location %d.\n", search, middle+1);
      break;
    }
    else
      last = middle - 1;

    middle = (first + last)/2;
  }
  if (first > last)
    printf("Not found! %d isn't present in the list.\n", search);
    end = clock();
     printf("Time for n=%d is %f ",n,((end - start))/CLOCKS_PER_SEC);

  return 0;


}


else
printf("Not a valid choice\n");


}
