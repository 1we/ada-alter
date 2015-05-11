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
 
  quick(1,n);

  end=clock();

  printf("\nSorted array elements are\n");
  for(i=1;i<=n;i++)
  printf("%d\n",a[i]);
 
  printf("\nTime taken for merge sort is %1f\n\n",((start-end)/CLOCKS_PER_SEC));

}

quick(int low,int high)
{

  int i,j,flag=1,temp,key;

  if(low<high)
  {
       
     i=low;
     key=a[low];
     j=high+1;

     while(flag==1)
     {

        do i++;
        while(a[i]<key);

        do j--;
        while(a[j]>key);

        if(i<j)
        {

          temp=a[j];
          a[j]=a[i];
          a[i]=temp;

        }

        else
         flag=0;

    }

    a[low]=a[j];
    a[j]=key;

   quick(low,j-1);
   quick(j+1,high);

 }

}
