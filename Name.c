#include<stdio.h>
#include<string.h>
int main(void)
{
	int m,n,i,j, t=0, done=0;
	char a[25010],b[25010];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s %s",&a, &b);
		 m=strlen(a);
		 n=strlen(b);
		 if(m<=n)
		 {
			i =0;
			for(j=0;j<n;j++)
			{
				if(a[i] == b[j])
				{
					if((i+1)<m)
					{
						i++;
						continue;
					}
					else
					{
						done = 1;
						break;
					}
				}
			}
			if(done ==1)
			{
				printf("YES\n");
			}
			else
			{
				
				//printf("NO\n");
				i =0;
				for(j=0;j<m;j++)
				{
					if(b[i] == a[j])
					{
						if((i+1)<n)
						{
							i++;
							continue;
						}
						else
						{
							done = 1;
							break;
						}
					}
				}
				if(done ==1)
				{
					printf("YES\n");
				}
				else
				{
					printf("NO\n");
				}
			}
				
			
		 }
		 else
		 {
			//printf("NO\n");
				i =0;
				for(j=0;j<m;j++)
				{
					if(b[i] == a[j])
					{
						if((i+1)<n)
						{
							i++;
							continue;
						}
						else
						{
							done = 1;
							break;
						}
					}
				}
				if(done ==1)
				{
					printf("YES\n");
				}
				else
				{
					printf("NO\n");
				}
		 }
		done =0;
	}
}
