#include<stdio.h>
int main(void)
{
	int t,level,leaves, stem_count_in_level,not_possible,i;
	scanf("%d",&t);
	while(t--)
	{
		not_possible =0;
		scanf("%d",&level);
		stem_count_in_level =1;
		//leave_count_in_level =0;
		for (i=0; i<level; i++)
		{
			scanf("%d",&leaves);
			if(i == (level-1))
			{
				if(leaves == stem_count_in_level)
					continue;
				else
				{
					not_possible =1;
					continue;
				}
			}
			if(leaves <= stem_count_in_level)
			{
				//update for next level
				//printf("one\n");
				stem_count_in_level = (stem_count_in_level-leaves)*2;
				continue;
			}
			else
			{
			//printf("two\n");
				not_possible =1;
				break;
			}
		}
		if (not_possible==0)
			printf("Yes\n");
		else
			printf("No\n");
	}
	
} 
