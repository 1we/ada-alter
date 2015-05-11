#include"stdio.h"
#include"time.h"
int a[50],b[50],c[50];
int lsearch(int n,int key);
int bsearch(int low,int high,int key);
int main()
{
 int i,n,ch,loc,key;
 clock_t start,end;
 printf("enter the size of an array\n");
 scanf("%d",&n);
 printf("enter the array elements\n");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 printf("enter the key\n");
 scanf("%d",&key);
 printf("1.binary search\n 2.linear search\n 3.exit\n");
 printf("enter ur choice:\n");
 scanf("%d",&ch);
 switch(ch)
{
 case 1:start=clock();
        wait(100);
        loc=bsearch(0,n,key);
        end=clock();
        if(loc!=-1)
    {
     printf("\n time taken to be searched is %f",(end-start)/(CLOCKS_PER_SEC));
     printf("\n element %d is at position %d",key,loc+1);
}
else
  printf("element not found");
  break;

 case 2:start=clock();
        wait(100);
        loc=lsearch(n,key);
      end=clock();
        if(loc!=-1)
{
 printf("\n time taken to be searched is %f",(end-start)/(CLOCKS_PER_SEC));
 printf("\n element %d is at position %d",key,loc+1);
}
else
 printf("element not found");
 break;
 
 //case 3:exit(0);
  }
}
int bsearch(int low,int high,int key)
{
 int mid;
 if(low>high)
 return -1;
 mid=(low+high)/2;
 return(key==a[mid]?mid:(key<a[mid]?bsearch(0,mid-1,key):bsearch(mid+1,high,key)));
}
int lsearch(int n,int key)
{
 if (key==a[n])
 return n;
 else
 if(n>0)
 return lsearch(n-1,key);
 return -1;
}

