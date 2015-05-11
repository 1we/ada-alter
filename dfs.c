#include"stdio.h"
void dfs(int n,int adj[10][10],int u,int s[])
{
 int v;
 s[u]=1;
 for(v=1;v<=n;v++)
{
 if(adj[u][v]==1 && s[v]==0)
{
 dfs(n,adj,v,s);
  }
 }
}
int main()
{
 int n,j,adj[10][10],s[10],connected,flag,i;
 printf("enter the no of vertices");
 scanf("%d",&n);
 printf("enter the adjacency matrix\n");
 for(i=1;i<=n;i++)
 {
 for(j=1;j<=n;j++)
{
 printf("\n\t(%d,%d):",i,j);

 scanf("%d",&adj[i][j]);
}
}
connected=0;
for(j=1;j<=n;j++)
{
 for(i=1;i<=n;i++)
 s[i]=0;
 dfs(n,adj,j,s);
 flag=0;
 for(i=1;i<=n;i++)
{
 if(s[i]==0)
{
 flag=1;
}
}
if(flag==0)
 connected=1;
}
 if(connected==1)
 printf("graph is connected");
 else
 printf("graph is not connected");
 }


 
