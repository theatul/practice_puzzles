#include<stdio.h>
int main(void)
{
	int t,i,candle[10], done =0;
	int small_index = 0;
	int small_value = 0;
	int final_value = 0;
	int final_value_zero = 0;
	
	scanf("%d",&t);
	while(t--)
	{
		small_index =0;
		small_value =0;
		final_value =0;
		final_value_zero =0;
		done =0;
		
		for(i=0; i<10;i++)
		{
			scanf("%d",&candle[i]);
		}
		
		small_value = candle[1];
		small_index = 1;
		for(i=1; i<10;i++)
		{
			if(candle[i] == 0 && (i!=0))
			{
				printf("%d\n",i);
				done = 1;
				break;
			}
			if(candle[i]<small_value)
			{
				small_value = candle[i];
				small_index = i;
			}
		}
		if(done ==1)
		{
			continue;
		}
		
// for 0		
		final_value_zero =10;
		for(i=0; i<candle[0]; i++)
		{
			final_value_zero = final_value_zero*10;
		}
 
// for others
		small_value = small_value+1;
		while(small_value--)
		{
			final_value = final_value*10+small_index;
		}
		if(final_value < final_value_zero )
			printf("%d\n",final_value);
		else 
			printf("%d\n",final_value_zero);
		
		
	}
} 
