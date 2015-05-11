#include<stdio.h>
#define infinity 999

int distance[10]; 

void main()
{
  
  int n,i,j,cost[10][10],source;

  printf("\nEnter the no of vertices\n");
  scanf("%d",&n);

  printf("\nEnter the cost adjacency matrix 0 for self loop and 999 for no edge\n");
  for(i=1;i<=n;i++)
  for(j=1;j<=n;j++)
  {

    printf("(%d,%d):",i,j);
    scanf("%d",&cost[i][j]);

  }

  printf("\nEnter the source\n");
  scanf("%d",&source);
  
  dijkstra(cost,n,source);

  for(i=1;i<=n;i++)
 
  printf("\nThe shortest distance from source %d to vertex %d is %d\n",source,i,distance[i]);

}

dijkstra(int cost[10][10],int n,int source)
{
  
  int i,j,visited[10],min,u;  

  for(i=1;i<=n;i++)
  {

    visited[i]=0;
    distance[i]=cost[source][i];
 
  }

  visited[source]=1;

  for(i=1;i<=n;i++)
  {

    min=infinity;

    for(j=1;j<=n;j++)
    
    if(visited[j]==0 && distance[j]<min)
    {

      min=distance[j];
        u=j;

    }

    visited[u]=1;

    for(j=1;j<=n;j++)
    
    if(visited[j]==0 && (distance[u]+cost[u][j])<distance[j])
    {
  
     distance[j]=distance[u]+cost[u][j];
 
    }

  }  

}
  
