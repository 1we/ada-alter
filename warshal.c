#include<stdio.h>

void main()
{

  int n,i,j,a[20][20];

  printf("\nEnter the no of vertices\n");
  scanf("%d",&n);

  printf("\nEnter adjacency matrix\n");
  for(i=1;i<=n;i++)
  for(j=1;j<=n;j++)

  {

    printf("(%d,%d):",i,j);
    scanf("%d",&a[i][j]);

  }

  warshal(a,n);

  printf("\nTransitive closure is\n\n");
  for(i=1;i<=n;i++)
 
  {
  
    for(j=1;j<=n;j++)
    printf("%d\t",a[i][j]);
    printf("\n\n");

  }

 printf("\n\n");

}

warshal(int a[20][20],int n)
{

   int i,k,j;  

  for(k=1;k<=n;k++)
  for(i=1;i<=n;i++)
  for(j=1;j<=n;j++)
  
  a[i][j]=a[i][j] || (a[i][k] && a[k][j]);

  return;

}
