#include"stdio.h"
#include"time.h"
exchange(int a[],int i, int j)
{
 int h=a[i];
 a[i]=a[j];
 a[j]=h;
}
down_heap(int a[],int v,int n)
{
 int w=2*v+1;
 while(w<n)
{
 if(w+1<n)
 if(a[w]<a[w+1])
 w++;
 if(a[v]>=a[w])
 return;
 exchange(a,v,w);
 v=w;
 w=2*v+1;
 }
}
build_heap(int a[],int n)
{
 int v;
 for(v=(v/2)-1;v>=0;v--)
 down_heap(a,v,n);
}
heap_sort(int a[],int n)
{
 int v;
 build_heap(a,n);
 for(v=n-1;v>=0;v--)
{
 exchange(a,0,v);
 down_heap(a,0,v);
 }
}
int main()
{
 int i,n,a[50];
 clock_t start,end;
 printf("enter the size of an array\n");
 scanf("%d",&n);
 printf("enter the array elements\n");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 start=clock();
 wait(100);
 heap_sort(a,n);
 end=clock();
 printf("sorted elements\n");
 for(i=0;i<n;i++)
 printf("%d\n",a[i]);
 printf("time taken is %f",(end-start)/(CLOCKS_PER_SEC));
}

