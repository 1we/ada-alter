#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int a[50];

void main()
{

  int n,i,key,ch,loc;
  clock_t start,end;

  printf("\nEnter the array size\n");
  scanf("%d",&n);

  printf("\nEnter the array elements\n");
  for(i=1;i<=n;i++)
  scanf("%d",&a[i]);

  a[i]=rand();  

  printf("\nEnter the key element\n");
  scanf("%d",&key);

  printf("\n1.BINARY SEARCH\n2.LINEAR SEARCH\n3.EXIT\n");
  printf("\nEnter your choice\n");
  scanf("%d",&ch);

  switch(ch)
  {

     case 1:start=clock();
           wait(100);
           loc=b_search(1,n,key);
           end=clock();

           if(loc!=-1)
           {

              printf("\nTime taken for search is %1f\n",(start-end)/CLOCKS_PER_SEC);
              printf("\nKey element %d is found at position %d\n\n",key,loc);

           }

           else 
             printf("\nUnsucessful search....Element not found\n\n");

           break;

     case 2:start=clock();
           wait(100);
           loc=l_search(n,key);
           end=clock();

           if(loc!=-1)
           {

              printf("\nTime taken for search is %1f\n",(start-end)/CLOCKS_PER_SEC);
              printf("\nKey element %d is found at position %d\n\n",key,loc);

           }

           else
             printf("\nUnsucessful search....Element not found\n\n");

           break;

     case 3:exit(0);

     default:printf("\nWrong choice..PLease enter properly\n");

  }

}

b_search(int low,int high,int key)
{
    
  int mid;

  if(low>high)
    return -1;

  mid=(low+high)/2;

  return (key==a[mid]?mid:(key<a[mid]?b_search(low,mid-1,key):b_search(mid+1,high,key)));

}

l_search(int n,int key)
{

  if(key==a[n])
   return n;

  else if(n>0)
    return(n-1,key);

  return -1;

}

