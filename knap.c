#include<stdio.h>

int w[10],p[10],n;

void main()
{

  int m,i,max_profit;
  
  printf("\nEnter the no of objects\n");
  scanf("%d",&n);

  printf("\nEnter the capacity\n");
  scanf("%d",&m);

  printf("\nEnter weight and profit\n");
  printf("\nW  P\n\n");
  for(i=1;i<=n;i++)
  scanf("%d%d",&w[i],&p[i]);

  max_profit=knap(1,m);

  printf("\nMaximum profit is %d\n\n",max_profit);

}

knap(int i,int m)
{

  if(i==n) return(w[i]>m?0:p[i]);

  if(w[i]>m) return(knap(i+1,m));

  return max(knap(i+1,m),knap(i+1,m-w[i])+p[i]);

}
     
int max(int a,int b)
{

  return a>b?a:b;

}
