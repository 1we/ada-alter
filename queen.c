#include<stdio.h>

int count=0,x[10];

void main()
{
  
  int n;

  printf("\nEnter the no of queens\n");
  scanf("%d",&n);

  n_queen(1,n);

  if(count==0)
   printf("\nNo solution\n");
 
  else
   printf("\nNo of solutions are:%d",count);

}

n_queen(int k,int n)
{
  
  int i,j,p;
  
  for(i=1;i<=n;i++)
  {

    if(place(k,i))
    {
  
      x[k]=i;
  
      if(k==n)
      {

        count++;
        printf("\nSolution %d is\n",count);

        for(j=1;j<=n;j++)
        {

          for(p=1;p<=n;p++)
          
           if(x[j]==p)
             printf("$\t");
            
           else
             printf("0\t");

             printf("\n");

        }
      
        printf("\n");
 
      }
 
      else
       n_queen(k+1,n);

    }

  }

}

place(int k,int i)
{
 
  int j; 

  for(j=1;j<k;j++)
 
  if(x[j]==i || abs(x[j]-i)==abs(j-k))
  return 0;

  return 1;

}
