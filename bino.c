#include<stdio.h>

void main()
{

  int n,k,c[10][10],i,j;  

  printf("\nEnter the no of objects\n");
  scanf("%d",&n);

  printf("\nEnter the no combinations\n");
  scanf("%d",&k);

  for(i=0;i<=n;i++)
  {

    for(j=0;j<=min(n,k);j++)
    {

      if(i==j || j==0)
       c[i][j]=1;

      else
       c[i][j]=c[i-1][j-1]+c[i-1][j];

     }

  }

  printf("\nBinomial coefficient of c(%d,%d) is %d\n\n",n,k,c[n][k]);

}

int min(int a,int b)
{
  
  return a<b?a:b;

}
