#include<stdio.h>
int main(void)
{
  unsigned int a,t,i,j,m,n,k,val=0;
  
  scanf("%d %d %d",&a,&n,&k);
   if(n==0)
   {
		a=0;
	}
   
  while(k--)
  {
    val=0;
    if(a!=0)
    {
		j=a%(n+1);
		printf("%d ",j);
		a=a/(n+1);
    }
    else
    {
		printf("0 "); 
    }
  } 
  return(0);
}  
