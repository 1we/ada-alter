#include<stdio.h>
#include<time.h>

int a[50];

void main()
{

  int n,i;
  clock_t start,end;
  
   
  printf("\nEnter the array size\n");
  scanf("%d",&n);

  printf("\nEnter array elements\n");
  for(i=1;i<=n;i++)
  scanf("%d",&a[i]);

  a[i]=rand();

  start=clock();
 
  divide(1,n);

  end=clock();

  printf("\nSorted array elements are\n");
  for(i=1;i<=n;i++)
  printf("%d\n",a[i]);
 
  printf("\nTime taken for merge sort is %1f\n\n",((start-end)/CLOCKS_PER_SEC));

}

divide(int low,int high)
{

 int mid;

 if(low<high)
 {

   mid=(low+high)/2;
 
   divide(low,mid);
 
   divide(mid+1,high);
  
   mergesort(low,mid,high);

 }

}

mergesort(int low,int mid,int high)
{

  int i,k,j,b[50];

  i=k=low;
  j=mid+1;
  while(i<=mid && j<=high)
  {

     if(a[i]<a[j])
     {

       b[k]=a[i];
        k++;
        i++;

     }

     else
     {

        b[k]=a[j];
         k++;
         j++;

      }

  }

  while(i<=mid)
  {

   b[k]=a[i];
        k++;
        i++;
 
  }

  while(j<=high)
  {
 
     b[k]=a[j];
      k++;
      j++;

  }

  for(i=low;i<=high;i++)
   a[i]=b[i];

}

