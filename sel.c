#include<stdio.h>
#include<time.h>

void main()
{
  
  int n,i,a[50];
  clock_t start,end;

  printf("\nEnter the array size\n");
  scanf("%d",&n);

  printf("\nEnter the array elements\n");
  for(i=1;i<=n;i++)
  scanf("%d",&a[i]);

  start=clock();

  sel_sort(a,n);

  end=clock();

  printf("\nSorted elements are:\n");
  for(i=1;i<=n;i++)
  printf("%d\n",a[i]);

  printf("\n\nTime taken for search is %1f\n\n",(start-end)/CLOCKS_PER_SEC);

}

sel_sort(int a[50],int n)
{
  
  int i,j,min,temp;  

  for(i=1;i<=n;i++)
  {

    min=i;
    
    for(j=i+1;j<=n;j++)
    {

      if(a[j]<a[min])
          min=j;
   
    }

    temp=a[i];
    a[i]=a[min];
    a[min]=temp;
  
  }

}

   
