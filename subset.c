#include<stdio.h>

int main()
{
 
  int n,set[10],i,d;

  printf("\nEnter the no of elements\n");
  scanf("%d",&n);

  printf("\nEnter the elements\n");
  for(i=1;i<=n;i++)
  scanf("%d",&set[i]);

  printf("\nEnter the sum\n");
  scanf("%d",&d);

  subset(set,n,d);

}

subset(int set[10],int n,int d)
{

  int index[100][100],i,j,sum,k,flag=0;; 

  for(i=1;i<=power(2,n);i++)
  {

     k=i; sum=0;

     for(j=1;j<=n;j++)
     {

       if(k & 1)
       {

         index[i][j]=1;
         sum+=set[j];

       }

       else 
        index[i][j]=0;
         k=k>>1;

     }
  
   if(sum==d)
   {

      flag=1;
      printf("\nSolutions are\n");

      for(j=1;j<=n;j++)
      {

         if(index[i][j]==1)
           printf("\n%d",set[j]);

      }
    
   }

  }

  if(flag==0)
   printf("\nNo solutions found\n");

  printf("\n\n");

}

power(int x,int y)
{

  int p=1,i;

  for(i=1;i<=y;i++)
   p=p*x;

  return p;

}
