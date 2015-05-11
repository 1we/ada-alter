#include<stdio.h>
#define infinity 999

void main()
{

  int n,i,j,a[10][10],source,m;

  printf("\nEnter the no of vertices\n");
  scanf("%d",&n);

  printf("\nEnter the cost adjacency matrix\n");
  for(i=1;i<=n;i++)
  for(j=1;j<=n;j++)
  {

    printf("(%d,%d):",i,j);
    scanf("%d",&a[i][j]);

  }

  printf("\nEnter the source\n");
  scanf("%d",&source);

  m=prims(a,n,source);

  printf("\n\nThe sum of minimum spanning tree is %d\n\n",m);

}

prims(int cost[10][10],int n,int source)
{

  int i,j,visited[50],vertex[20],cmp[20],mincost,u,sum=0,v;

  for(i=1;i<=n;i++)
  {

     visited[i]=0;
     vertex[i]=source;
     cmp[i]=cost[source][i];

  }

  visited[source]=1;

  for(i=1;i<=n-1;i++)
  {

    mincost=infinity;

    for(j=1;j<=n;j++)
    
      if(!visited[j] && cmp[j]<mincost)
      {
      
         mincost=cmp[j];
           u=j;
 
      }

   
  
    visited[u]=1;
    sum+=cmp[u];

    printf("\n%d->%d sum=%d",vertex[u],u,sum);

    for(v=1;v<=n;v++)
  
      if(!visited[v] && cost[u][v]<cmp[v])
      {

         cmp[v]=cost[u][v];
         vertex[v]=u;

      }

  }

  return sum; 

}   
