#include"stdio.h"
int n,capacity,w[50],p[50],i,j,max_profit,x[50],v[50][50];
int main()
{
 printf("\n knapsac by dynamic programming\n");
 printf("\n enter no of objects\n");
 scanf("%d",&n);
 read_data();
 knapsac();
 for(i=0;i<n;i++)
 x[i]=0;
 i=n;
 j=capacity;
 while(i!=0 && j!=0)
{
 if(v[i][j]!=v[i-1][j])
{
 x[i]=1;
 j=j-w[i];
}
 i=i-1;
}
printf("the optimal sol is:");
printf("%d",v[n][capacity]);
printf("the items selected are:");
for(i=0;i<=n;i++)
 if(x[i]!=0)
 printf("%d\n",i);
 for(i=0;i<=n;i++)
{
 for(j=0;j<=capacity;j++)
{
 printf("%d\t",v[i][j]);
}
 printf("\n");
 }
}
read_data()
{
printf("enter weight and profit of each object");
for(i=1;i<=n;i++)
{
 printf("\n\t object:%d",i);
 printf("\n weight:");
 scanf("%d",&w[i]);
 printf("\n profit:");
 scanf("%d",&p[i]);
}
printf("enter the capacity of knapsac:");
scanf("%d",&capacity);
}
knapsac()
{
 for(i=0;i<=n;i++)
{
 for(j=0;j<=capacity;j++)
{
 if(i==0||j==0)
 v[i][j]=0;
else if(j<w[i])
 v[i][j]=v[i-1][j];
else
 v[i][j]=max(v[i-1][j],v[i-1][j-w[i]]+p[i]); 
 }
 }
}
int max(int a,int b)
{
 if(a>b)
return a;
else
 return b;
}
