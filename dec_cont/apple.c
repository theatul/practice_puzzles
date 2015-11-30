#include<stdio.h>
#include<stdlib.h>

int sortArrayDescending(unsigned int *array, unsigned int size)
{ 
	unsigned int a,i,j;
	for (i = 0; i < size; ++i)
    {
        for (j = i + 1; j < size; ++j)
        {
            if (array[i] < array[j])
            {
                a = array[i];
                array[i] = array[j];
                array[j] = a;
            }
        }
    }
}

int main(void)
{
	unsigned int num_test, num_tree;
	

	int apple_eachtree[100000];
	scanf("%d",&num_test);
	
	while(num_test!=0)
	{
		int i;
		int minutes=0;
		scanf("%d",&num_tree);
		for(i =0 ; i<num_tree; i++)
		{
			scanf("%d",&apple_eachtree[i]);
		}
		sortArrayDescending(apple_eachtree,num_tree);
	/*	for(i=0; i<num_tree; i++)
		{
		
			printf("%d ",apple_eachtree[i]);
		}
		*/
		//perform operation
		int index =0;
		//int nextindex;
		while(1)
		{
			if(apple_eachtree[0] == 0)
				break;
	
			int j,k;
			//find subset
			for(j = index ; j< (num_tree-1); j++)
			{
				if (apple_eachtree[j]==apple_eachtree[j+1])
					continue;
				else
				{
					break;
				}
			}
			if (j == (num_tree-1))
			{
				minutes++;
				break;
			}
			//pluck fruit
			for (k=index ;k<=j;k++ )
			{
				apple_eachtree[k]= apple_eachtree[k]-apple_eachtree[j+1];
			}
			//sortArrayDescending(apple_eachtree,num_tree);
			index = j+1;
			if (index == (num_tree-1))
			{
				index = 0;
				sortArrayDescending(apple_eachtree,num_tree);
			}
			minutes++;
		}
	printf("%d\n",minutes);
	num_test--;
	}
}

