#include<stdio.h>
int main(void)
{
	int t,n,c,val,a=0;
	scanf("%d",&t);
	while(t--)
	{
		a=0;
		scanf("%d %d",&n,&c);
		while(n--)
		{
			scanf("%d",&val);
			a=a+val;
		}
		if(a<=c)
		{
			printf("Yes\n");
		}
		else
		{
			printf("No\n");
		}
	}
} 
