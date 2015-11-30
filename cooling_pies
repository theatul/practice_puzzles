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
	unsigned int num_test;
	unsigned int num_pie_rack,i,j, pie_count =0;
	unsigned int *pie , *rack;
	scanf("%d",&num_test);
 
	while(num_test!=0)
	{
		scanf("%d",&num_pie_rack);
		pie = (unsigned int *)malloc(num_pie_rack*sizeof(unsigned int));
		rack = (unsigned int *)malloc(num_pie_rack*sizeof(unsigned int));
		
		for(i=0; i<num_pie_rack; i++)
		{
			scanf("%d",(pie+i));
		}
		for(i=0; i<num_pie_rack; i++)
		{
			scanf("%d",(rack+i));
		}
		sortArrayDescending(pie, num_pie_rack);
		sortArrayDescending(rack, num_pie_rack);
#if 0 // debug
		for(i=0; i<num_pie_rack; i++)
		{
		
			printf("%d ",*(pie+i));
		}
		printf("\n");
		for(i=0; i<num_pie_rack; i++)
		{
			printf("%d ",*(rack+i));
		
		}
#endif
		//i= pie , j = rack
		for (i =0, j=0; (i<num_pie_rack && j< num_pie_rack); )
		{
			//printf("A, %d , %d \n", *(pie+i), *(rack+j));
			if(*(pie+i) <= *(rack+j))
			{
			//	printf("B\n");
				pie_count++;
				i++;
				j++;
			}
			else
			{
			//	printf("C\n");
				i++;
				continue;
			}
		}
		printf("%d\n", pie_count);
 
		num_test --;
		pie_count =0;
		i = j =0;
		free(pie);
		free(rack);
		
	/*	
		scanf("%d",&num);
		if(num == 42)
			break;
		else
		{
			printf("%d\n", num);
		}
		*/
	}
	
	return(0);
} 
