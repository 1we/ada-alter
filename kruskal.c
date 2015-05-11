#include<stdio.h>
#define infinity 999

int parent[10],t[10][10],cost[10][10];

void main()
{

  int n,i,j;

  printf("\nEnter the no of vertices\n");
  scanf("%d",&n);

  printf("\nEnter the cost adjacency matrix\n");
  for(i=1;i<=n;i++)
  for(j=1;j<=n;j++)
  {

    printf("(%d,%d):",i,j);
    scanf("%d",&cost[i][j]);

  }

  for(i=1;i<=n;i++)
   parent[i]=0;

  kruskal(n);

}

kruskal(int n)
{
 
  int k,i,j,mincost,sum=0,res1,res2,u,v;

  for(k=1;k<n;k++)
  {

    mincost=infinity;
 
    for(i=1;i<n-1;i++)
    {

      for(j=1;j<=n;j++)
      {

        if(i==j) continue;
       
         if(cost[i][j]<mincost)
         {

           u=find(i);
           v=find(j);

           if(u!=v)
           {

             res1=i;
             res2=j;
             mincost=cost[i][j];
     
           }
 
        } 

      }
   
    }


    union1(res1,find(res2));
    t[k][1]=res1;
    t[k][2]=res2;
    sum+=mincost;
 
  }
  printf("\ncost of spanning tree is %d\n",sum);
  printf("\nEdges of spanning tree are\n");

  for(i=1;i<n;i++)
  printf("\n%d->%d\n",t[i][1],t[i][2]);

  printf("\n\n");

}

int find(int v)
{

  while(parent[v])
   v=parent[v];

  return v;

}

int  union1(int i,int j)
{

  parent[j]=i;

}


