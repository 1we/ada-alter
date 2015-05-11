#include<stdio.h>

void main()
{
   int i,j,n,a[10][10];
   
   printf("\nEnter the no of vertices\n");
   scanf("%d",&n);

   printf("\nEnter the cost adjacency matrix 0 for self loop and 999 for no edge\n");
   for(i=1;i<=n;i++)
   for(j=1;j<=n;j++)
   
   {
  
      printf("(%d ,%d):",i,j);
      scanf("%d",&a[i][j]);
   
   }

   floyd(a,n);
  
   printf("\nAll pairs shortest path is\n");
   
   for(i=1;i<=n;i++)
    {

	for(j=1;j<=n;j++)
	printf("%d\t",a[i][j]);
	printf("\n");

    }

}

floyd(int a[10][10],int n)
{

  int i,j,k;

  for(k=1;k<=n;k++)

  for(i=1;i<=n;i++)

  for(j=1;j<=n;j++)

  a[i][j]=min(a[i][j],(a[i][k]+a[k][j]));

  return;

}

int min(int a,int b)
{

  return a<b?a:b;

}


