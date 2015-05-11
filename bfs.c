#include<stdio.h>

int visited[10];

void main()
{

  int n,i,j,source,a[20][20],count=0; 

  printf("\nEnter the no of vertices...?\n");
  scanf("%d",&n);

  printf("\nEnter the adjacency matrix\n\n");

  for(i=1;i<=n;i++)
  for(j=1;j<=n;j++)

  {

     printf("(%d,%d):",i,j);
     scanf("%d",&a[i][j]);

  }

  printf("\nEnter the source vertex\n");
  scanf("%d",&source);

  for(i=1;i<=n;i++)
  visited[i]=0;

  bfs(a,n,source);

  for(i=1;i<=n;i++)
  {

    if(visited[i]==1)
     printf("\nThe vertex %d is reachable from source vertex %d\n",i,source);

    else
     printf("\nThe vertex %d is not reachable from source vertex %d\n",i,source);

  }

  printf("\n\n");

}

bfs(int a[20][20],int n,int source)
{

  int i,front=1,rear=1,u,q[10];

  visited[source]=1;

  q[rear]=source;

  while(front<=rear)
  {

     u=q[front];
    
     front=front+1;

     for(i=1;i<=n;i++)
     {

        if(a[u][i]==1 && visited[i]==0)
        {

           rear=rear+1;
           q[rear]=i;
           visited[i]=1;
 
        }
  
      }

   }

}
   

  



