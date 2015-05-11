#include<stdio.h>
#include<string.h>

void main()
{

  char t[100],p[50];
  int pos; 

  printf("\nEnter the text string\n");
  gets(t);

  printf("\nEnter the pattern string\n");
  gets(p);

  pos=horspool(t,p);

  if(pos==-1)
   printf("\nPattern string not found\n");
 
  else
   printf("\nPattern string found at position %d\n\n",pos+1);

}

horspool(char t[],char p[])
{

  int s[256],m,n,i,k;

  shift_table(p,s);

  m=strlen(p);
  n=strlen(t);

  i=m-1;

  while(i<=n-1)
  {
   
    k=0;
    while((k<=m-1) && (t[i-k]==p[m-1-k])) 
    k++;

    if(k==m)
     return i-m+1;

    else
      i=i+s[t[i]];

  }

  return -1;

}

shift_table(char p[],int s[])
{
  
  int m,i;

  m=strlen(p);

  for(i=0;i<=127;i++)
   s[i]=m;

  for(i=0;i<=m-2;i++)
   s[p[i]]=m-1-i;

}

